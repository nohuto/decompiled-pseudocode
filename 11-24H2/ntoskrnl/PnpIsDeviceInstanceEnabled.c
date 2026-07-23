/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x140A55FE0
 * Callers:
 *     PiProfileUpdateDeviceTreeCallback @ 0x14072B310 (PiProfileUpdateDeviceTreeCallback.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpDisableDevice @ 0x140720DF0 (PnpDisableDevice.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A56300 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  void *v3; // rbx
  int v5; // esi
  unsigned int v6; // r15d
  int v7; // r12d
  _QWORD *v8; // rax
  void *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r8
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  void *Pool2; // rax
  void *v16; // rsi
  HANDLE v17; // r8
  __int64 v18; // rdx
  char v19; // al
  char v20; // al
  _WORD *v22; // rax
  int v23; // eax
  int v24; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v25[3]; // [rsp+44h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v27; // [rsp+A0h] [rbp+50h]
  int v28; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a3;
  Handle = a1;
  v3 = 0LL;
  v28 = 0;
  v24 = 0;
  v5 = a3;
  v25[0] = 0;
  v6 = 1;
  v7 = 0;
  v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v9 = v8;
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(v8[39] + 40LL);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x2000) == 0 || (v23 = *(_DWORD *)(v10 + 404), v23 != 22) && v23 != 29 )
  {
LABEL_4:
    if ( !a2 )
      goto LABEL_28;
    v12 = a2[1];
    if ( (unsigned __int16)v12 >= 2u )
    {
      v13 = (_WORD *)*((_QWORD *)a2 + 1);
      if ( v13 )
      {
        v14 = *a2;
        if ( (unsigned __int16)v14 > (unsigned __int16)v12 )
          goto LABEL_28;
        if ( (_WORD)v14 )
        {
          if ( *v13
            && ((_WORD)v14 != (_WORD)v12 || v13[((unsigned __int64)*a2 >> 1) - 1])
            && (v14 > v12 - 2 || v13[(v14 >> 1) - 1] && v13[v14 >> 1]) )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL, v14 + 2, 0x75737050u);
            v16 = Pool2;
            if ( !Pool2 )
              goto LABEL_28;
            memmove(Pool2, *((const void **)a2 + 1), *a2);
            v3 = v16;
            *((_WORD *)v16 + ((unsigned __int64)*a2 >> 1)) = 0;
            v5 = v27;
            goto LABEL_15;
          }
        }
        else if ( *v13 )
        {
          v22 = (_WORD *)ExAllocatePool2(0x100uLL, 2uLL, 0x75737050u);
          if ( !v22 )
            goto LABEL_28;
          *v22 = 0;
          v3 = v22;
          goto LABEL_15;
        }
        v3 = (void *)*((_QWORD *)a2 + 1);
      }
    }
LABEL_15:
    v17 = Handle;
    if ( Handle )
    {
LABEL_16:
      v24 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v3,
                  (__int64)v17,
                  0xBu,
                  (__int64)v25,
                  (__int64)&v28,
                  (__int64)&v24,
                  0) < 0
        || v25[0] == 4 && v24 == 4 )
      {
        v19 = v28;
      }
      else
      {
        v19 = 0;
        v28 = 0;
      }
      if ( (v19 & 1) != 0 )
      {
        v20 = 1;
        v28 = 1;
      }
      else
      {
        PnpGetDeviceInstanceCsConfigFlags(a2, v18, &v28, 0LL);
        v20 = v28;
      }
      if ( (v20 & 7) != 0 )
      {
        v6 = 0;
        if ( v5 )
        {
          if ( v11 && (unsigned int)(*(_DWORD *)(v11 + 300) - 769) > 1 )
            PnpDisableDevice(v11, 0x16u);
        }
      }
LABEL_29:
      if ( !v9 )
        goto LABEL_30;
      goto LABEL_48;
    }
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v3, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v17 = Handle;
      v7 = 1;
      goto LABEL_16;
    }
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v6 = 0;
LABEL_48:
  ObfDereferenceObjectWithTag(v9, 0x55706E50u);
LABEL_30:
  if ( v7 )
    ZwClose(Handle);
  if ( v3 )
    PnpUnicodeStringToWstrFree(v3, (__int64)a2);
  return v6;
}
