/*
 * XREFs of PfGetCompletedTrace @ 0x1408F64A0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PfpPartitionRundownProtectionRelease @ 0x14046A344 (PfpPartitionRundownProtectionRelease.c)
 *     PfFbBufferListFlushStandby @ 0x140473B84 (PfFbBufferListFlushStandby.c)
 *     PfTFreeTraceDump @ 0x1404A3F48 (PfTFreeTraceDump.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CA2BC (PfpTraceLogPfPartitionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 *     PfTAccessTracingStart @ 0x140B5D620 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // r13
  char v7; // al
  char v8; // r15
  int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned int i; // edx
  _QWORD *v13; // r14
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  int v19; // eax
  char v21; // [rsp+30h] [rbp-108h]
  int v22; // [rsp+34h] [rbp-104h]
  SIZE_T Length; // [rsp+38h] [rbp-100h] BYREF
  int v24; // [rsp+40h] [rbp-F8h]
  __int64 v25; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int *v26; // [rsp+50h] [rbp-E8h] BYREF
  volatile void *Address; // [rsp+58h] [rbp-E0h]
  _QWORD *v28; // [rsp+60h] [rbp-D8h]
  _DWORD *v29; // [rsp+68h] [rbp-D0h]
  _QWORD *v30; // [rsp+70h] [rbp-C8h]
  __int64 v31; // [rsp+78h] [rbp-C0h]
  __int64 v32[3]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+98h] [rbp-A0h]
  __int64 v34; // [rsp+A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+B0h] [rbp-88h] BYREF
  SIZE_T *p_Length; // [rsp+D0h] [rbp-68h]
  int v37; // [rsp+D8h] [rbp-60h]
  int v38; // [rsp+DCh] [rbp-5Ch]
  unsigned int **v39; // [rsp+E0h] [rbp-58h]
  int v40; // [rsp+E8h] [rbp-50h]
  int v41; // [rsp+ECh] [rbp-4Ch]

  v26 = a4;
  v21 = a3;
  Length = a2;
  Address = a1;
  v30 = a1;
  v32[1] = (__int64)a4;
  v32[0] = 0LL;
  v22 = 0;
  v24 = 0;
  v5 = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (unsigned int)dword_140E074B8 <= 4 )
  {
    v8 = 1;
  }
  else
  {
    if ( (byte_140E074C8 & 2) != 0 && (qword_140E074D0 & 2) == qword_140E074D0 )
    {
      v8 = 1;
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v8 = 1;
    }
    if ( v7 )
    {
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_1400484D9, 0LL, 0LL, 2u, v35);
      a1 = Address;
      a4 = v26;
      a3 = v21;
    }
    else
    {
      a1 = Address;
    }
  }
  if ( a2 < 0x18 )
  {
    *a4 = 24;
    v9 = -1073741789;
    v19 = 0;
  }
  else
  {
    if ( a3 )
    {
      if ( ((unsigned __int8)a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = v25;
      a1 = v30;
      Address = v30;
    }
    v33 = *(_OWORD *)a1;
    v34 = a1[2];
    if ( (_WORD)v33 == 2 )
    {
      LOBYTE(a4) = a3;
      v9 = PfpPartitionFindByHandle(&v25, v32, v34, a4);
      v5 = v25;
      if ( v9 >= 0 )
      {
        v22 = 1;
        v32[2] = v25 + 624;
        while ( 1 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 624));
          if ( !*(_DWORD *)(v5 + 616) )
            break;
          *(_DWORD *)(v5 + 616) = 0;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 624));
          PfFbBufferListFlushStandby(v5, v5 + 288);
        }
        v10 = *(_DWORD *)(v5 + 600);
        v11 = *(_DWORD *)(v5 + 604);
        for ( i = 0; i < 2; ++i )
        {
          if ( i )
          {
            v13 = (_QWORD *)(v5 + 568);
            v14 = (_DWORD *)(v5 + 600);
          }
          else
          {
            v13 = (_QWORD *)(v5 + 584);
            v14 = (_DWORD *)(v5 + 608);
          }
          v29 = v14;
          v28 = v13;
          v15 = (_DWORD *)*v13;
          if ( (_QWORD *)*v13 != v13 )
          {
            v6 = (_DWORD *)*v13;
            v31 = *v13;
            v16 = v15[6] + 24;
            HIDWORD(Length) = v16;
            if ( v16 > (unsigned int)Length )
            {
              *v26 = v16;
              v9 = -1073741789;
              goto LABEL_29;
            }
            v17 = *(_QWORD *)v15;
            if ( *((_QWORD **)v15 + 1) != v13 || *(_DWORD **)(v17 + 8) != v15 )
              __fastfail(3u);
            *v13 = v17;
            *(_QWORD *)(v17 + 8) = v13;
            --*v14;
            break;
          }
        }
        if ( v10 >= v11 && *(_DWORD *)(v5 + 600) < *(_DWORD *)(v5 + 604) )
        {
          PfTAccessTracingStart(v5, 2LL);
          KeSetEvent((PRKEVENT)(v5 + 736), 0, 0);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 624));
        v22 = 0;
        v24 = 0;
        if ( v6 )
        {
          if ( v21 )
            ProbeForWrite(Address, (unsigned int)Length, 8u);
          v18 = Address;
          *(_OWORD *)Address = 0LL;
          v18[2] = 0LL;
          *(_DWORD *)v18 = 1572866;
          v30 = (_QWORD *)qword_140E670D8;
          v18[1] = ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140E670D8)) << 8)
                 + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140E670D8) >> 24);
          v18[2] = v34;
          memmove(v18 + 3, v6 + 4, (unsigned int)v6[6]);
          *v26 = HIDWORD(Length);
          PfTFreeTraceDump(v5, v6);
          v9 = 0;
        }
        else
        {
          v9 = -2147483622;
        }
      }
    }
    else
    {
      v9 = -1073741735;
    }
LABEL_29:
    v19 = v22;
  }
  if ( v19 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 624));
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    if ( (byte_140E074C8 & 2) == 0 || (qword_140E074D0 & 2) != qword_140E074D0 )
      v8 = 0;
    if ( v8 )
    {
      LODWORD(Length) = PfpTraceLogPfPartitionId((__int64 *)v5);
      p_Length = &Length;
      v37 = 4;
      v38 = 0;
      LODWORD(v26) = v9;
      v39 = &v26;
      v40 = 4;
      v41 = 0;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_1400483ED, 0LL, 0LL, 4u, v35);
    }
  }
  if ( v5 )
    PfpPartitionRundownProtectionRelease(v5);
  if ( v32[0] )
    PfpPartitionDereferenceParent(v32[0]);
  return (unsigned int)v9;
}
