/*
 * XREFs of RootHub_ForceU3 @ 0x1400362F4
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x14000AD6C (RootHub_HandleResumedPorts.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU0AndWait @ 0x1400281F8 (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int *v10; // r15
  __int64 result; // rax
  int Ulong; // eax
  int v13; // ebx
  void *v14; // rdx
  _QWORD *v15; // rbp
  _QWORD *v16; // r14
  int v17; // ebx
  int v18; // edx

  v3 = a2 - 1;
  v4 = a1 + 1;
  v5 = a1[1];
  v7 = v4;
  v8 = a1[6] + 120LL * (unsigned int)(a2 - 1);
  v9 = *(_QWORD *)(v5 + 88);
  v10 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v8 + 13) == 2 )
  {
    if ( (*(_QWORD *)(v5 + 736) & 0x8000000LL) != 0 )
    {
      result = RootHub_ForceU0AndWait(a1, a2);
      if ( (int)result < 0 )
        return result;
      v7 = a1 + 1;
    }
  }
  else if ( (*(_QWORD *)(v5 + 736) & 0x80000LL) != 0 )
  {
    result = RootHub_ForceU0AndWait(a1, a2);
    if ( (int)result < 0 )
      return result;
  }
  RootHub_AcquireReadModifyWriteLock((__int64)a1, v3);
  *(_BYTE *)(v8 + 18) = 0;
  Ulong = XilRegister_ReadUlong(v9, v10);
  v13 = Ulong;
  v14 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*v4 + 72LL),
      (_DWORD)v14,
      11,
      235,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
      Ulong);
    v14 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
  }
  v15 = v7;
  if ( (v13 & 2) == 0 )
    goto LABEL_12;
  v16 = v7;
  if ( (v13 & 0x1E0u) >= 0x60 )
  {
    v15 = a1 + 1;
LABEL_12:
    v16 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*v7 + 72LL),
        (_DWORD)v14,
        11,
        236,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
      v16 = v15;
    }
  }
  v17 = v13 & 0xE00C200 | 0x10060;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*v16 + 72LL),
      (_DWORD)v14,
      11,
      237,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
      v17);
  }
  XilRegister_WriteUlong(v9, v10, v17);
  RootHub_ReleaseReadModifyWriteLock((__int64)a1, a2 - 1);
  result = XilRegister_ReadUlong(v9, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*v16 + 72LL),
             v18,
             11,
             238,
             (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
             result);
  }
  return result;
}
