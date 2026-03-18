/*
 * XREFs of RootHub_DetectLinkErrorState @ 0x14000A288
 * Callers:
 *     Controller_CheckHealth @ 0x14000957C (Controller_CheckHealth.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     RootHub_DetectPortInInactiveState @ 0x14000A42C (RootHub_DetectPortInInactiveState.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14000A540 (RootHub_DetectPortInComplianceMode.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_DetectLinkErrorState(__int64 a1)
{
  char v1; // r12
  unsigned int v2; // esi
  unsigned int v3; // r13d
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned int *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int Ulong; // eax
  __int64 v14; // rcx
  char v15; // [rsp+70h] [rbp+8h]
  int v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  v16 = 0;
  v1 = 0;
  v2 = 1;
  v3 = *(_DWORD *)(a1 + 16);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v17 = result;
  if ( v3 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 48);
      v7 = v2 - 1;
      v8 = 120 * v7;
      if ( *(_BYTE *)(v6 + 120 * v7 + 13) != 2 )
      {
        v9 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v7);
        v15 = 0;
        if ( KeGetCurrentIrql() == 2 )
        {
          v10 = *(_QWORD *)(a1 + 8);
          if ( *(_BYTE *)(v10 + 1001) )
          {
            Controller_LowerAndTrackIrql(v10);
            v15 = 1;
          }
        }
        v11 = *(_QWORD *)(a1 + 48);
        DynamicLock_Acquire(*(_QWORD *)(v11 + v8 + 24));
        v12 = v17;
        *(_BYTE *)(v11 + v8 + 32) = v15;
        Ulong = XilRegister_ReadUlong(v12, v9);
        v14 = *(_QWORD *)(a1 + 48);
        v16 = Ulong;
        LOBYTE(v11) = *(_BYTE *)(v14 + v8 + 32);
        *(_BYTE *)(v14 + v8 + 32) = 0;
        DynamicLock_Release(*(_QWORD *)(v14 + v8 + 24));
        if ( (_BYTE)v11 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        if ( (unsigned __int8)RootHub_DetectPortInComplianceMode(a1, v2, &v16)
          || (result = RootHub_DetectPortInInactiveState(a1, v2, &v16), (_BYTE)result) )
        {
          v1 = 1;
          result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v6 + v8 + 100), 1);
          *(_BYTE *)(v6 + v8 + 104) = 1;
        }
      }
      ++v2;
    }
    while ( v2 <= v3 );
    if ( v1 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4,
          11,
          268,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BDB0)(UcxDriverGlobals, *(_QWORD *)a1);
    }
  }
  return result;
}
