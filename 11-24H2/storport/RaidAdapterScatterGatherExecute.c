/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x140025860
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x140066780 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // ebp
  unsigned int v8; // r15d
  int v9; // ecx
  bool v10; // bl
  bool v11; // zf
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool, __int64, int); // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int); // rax
  int v21; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 168);
  v5 = a2;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v6 = *(_DWORD *)(v3 + 24);
    v8 = *(_DWORD *)(v3 + 60);
    v7 = *(_DWORD *)(v3 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(unsigned __int8 *)(v3 + 2);
    v8 = *(_DWORD *)(v3 + 16);
  }
  v9 = v6 & 0x40;
  v10 = (v6 & 0x80) != 0;
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    v11 = v9 == 0;
    LOBYTE(a3) = 1;
    v12 = *(_QWORD *)(a2 + 104);
    LOBYTE(a2) = !v11;
    KeFlushIoBuffers(v12, a2, a3);
  }
  if ( v7 == 23 && *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL) > v8 )
    v8 = *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL);
  v13 = (__int64 *)(a1 + 880);
  if ( a1 != -880 )
  {
    v14 = *v13;
    if ( *v13 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      if ( v15 )
      {
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool, __int64, int))(v15 + 112);
        if ( v16 )
        {
          result = v16(
                     v14,
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(v5 + 104),
                     *(_QWORD *)(v5 + 184),
                     v8,
                     RaidpAdapterContinueScatterGather,
                     v5,
                     v10,
                     v5 + 232,
                     424);
          if ( (_DWORD)result != -1073741789 )
            return result;
          v18 = *v13;
          if ( *v13 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( v19 )
            {
              v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(v19 + 88);
              if ( v20 )
              {
                LOBYTE(v21) = v10;
                return v20(
                         v18,
                         *(_QWORD *)(a1 + 8),
                         *(_QWORD *)(v5 + 104),
                         *(_QWORD *)(v5 + 184),
                         v8,
                         RaidpAdapterContinueScatterGather,
                         v5,
                         v21);
              }
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
