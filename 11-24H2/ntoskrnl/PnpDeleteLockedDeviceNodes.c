/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x140A649E8
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407380C8 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PipRemoveDevicesInRelationList @ 0x1409BADE0 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404CE1B0 (McTemplateK0z_EtwWriteTransfer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PipSendGuestAssignedNotification @ 0x140734194 (PipSendGuestAssignedNotification.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A64C7C (PnpDeleteLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        unsigned int **a2,
        int a3,
        char a4,
        int a5,
        int a6,
        ULONG_PTR a7,
        __int64 a8)
{
  int v8; // r10d
  char v9; // bl
  unsigned int v13; // r12d
  __int64 v14; // rdi
  int v15; // esi
  unsigned int *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r13
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // esi
  unsigned int *v26; // r8
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  NTSTATUS v31; // eax

  v8 = 0;
  v9 = a4;
  if ( *((_BYTE *)a2 + 8) )
  {
    v13 = (a3 == 1) + 1;
    v14 = 0LL;
LABEL_5:
    v15 = v14;
    while ( *((_BYTE *)a2 + 8) )
    {
      v16 = *a2;
      v17 = **a2;
      if ( (unsigned int)v14 >= (unsigned int)v17 )
        break;
      if ( v13 > 1 )
      {
        if ( v13 != 2 )
          return (unsigned int)v8;
        v14 = (unsigned int)(v17 + ~(_DWORD)v14);
      }
      if ( !v16 || (unsigned int)v14 >= (unsigned int)v17 )
        break;
      v18 = 3 * v14;
      v19 = v16[6 * v14 + 6];
      v14 = (unsigned int)(v15 + 1);
      v20 = *(_QWORD *)&v16[2 * v18 + 4];
      ++v15;
      if ( v19 || v9 )
      {
        if ( v20 )
          v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
        else
          v21 = 0LL;
        if ( (unsigned int)(a3 - 2) <= 1 )
        {
          v22 = *(unsigned int *)(v21 + 704);
          *(_DWORD *)(v21 + 704) &= ~0x2000u;
          if ( (v22 & 0x2000) != 0 )
          {
            if ( (byte_140EEFF64 & 8) != 0 )
              McTemplateK0z_EtwWriteTransfer(
                v22,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_Guest_Unassigned,
                v17,
                *(const wchar_t **)(v21 + 48));
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v21 + 48),
              1,
              0LL,
              0LL,
              (__int64)DEVPKEY_Device_AssignedToGuest,
              0,
              0LL,
              0,
              0);
            v31 = PipSendGuestAssignedNotification(v21, 0);
            if ( v31 < 0 )
              PnpRequestDeviceRemoval(v21, 0, 57, v31);
          }
        }
        v8 = PnpDeleteLockedDeviceNode(v21, a7, a8);
        if ( v8 >= 0 )
        {
          v9 = a4;
          goto LABEL_5;
        }
        if ( (*(_DWORD *)(v21 + 704) & 4) == 0 )
          KeBugCheckEx(0xCAu, 0xDuLL, v21, 4uLL, 0LL);
        PoFxIdleDevice(*(_QWORD *)(v21 + 32));
        *(_DWORD *)(v21 + 704) &= ~4u;
        if ( a3 == 1 || !(_DWORD)v14 )
        {
          v23 = 3;
          v24 = 0;
        }
        else
        {
          v24 = **a2 - v14;
          v23 = 2;
        }
LABEL_26:
        v25 = v24;
        while ( *((_BYTE *)a2 + 8) )
        {
          v26 = *a2;
          v27 = **a2;
          if ( v24 >= v27 )
            break;
          if ( v23 != 2 )
            break;
          v30 = v27 + ~v24;
          if ( !v26 || (unsigned int)v30 >= v27 )
            break;
          _mm_lfence();
          v28 = *(_QWORD *)&v26[6 * v30 + 4];
          v24 = ++v25;
          if ( v20 == v28 )
            goto LABEL_26;
          if ( v28 )
            v29 = *(_QWORD *)(*(_QWORD *)(v28 + 312) + 40LL);
          else
            LODWORD(v29) = 0;
          PnpDeleteLockedDeviceNode(v29, a7, a8);
        }
        return (unsigned int)-2147483608;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
