/*
 * XREFs of ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x14020FC40
 * Callers:
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x140218714 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14004758C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall CDesktopInputSink::GetTransform(struct tagINPUT_TRANSFORM *a1)
{
  CPushLock *v2; // rdi
  CompositionInputObject *v3; // rcx
  bool v4; // bl
  bool v5; // si
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v10; // rcx
  int v11; // esi
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __m128 v17; // xmm2
  __m128 v18; // xmm2
  bool v19; // di
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int16 v24; // [rsp+30h] [rbp-28h]

  v2 = *(CPushLock **)(W32GetUserSessionState(a1) + 19184);
  RIMLockShared((__int64)v2);
  v3 = (CompositionInputObject *)*((_QWORD *)v2 + 2);
  if ( !v3 )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v24 = 11;
LABEL_19:
    LOBYTE(v7) = v5;
    LOBYTE(v6) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v7,
      v8,
      3,
      2,
      v24,
      (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
LABEL_20:
    CPushLock::ReleaseLock(v2);
    return 0;
  }
  if ( (int)CompositionInputObject::QueryTransform(v3, a1) < 0 )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v24 = 12;
    goto LABEL_19;
  }
  CPushLock::ReleaseLock(v2);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10) + 71520);
  if ( !v11 )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        13,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
    return 0;
  }
  v17 = (__m128)LODWORD(FLOAT_1_0);
  v17.m128_f32[0] = 1.0 / (float)((float)v11 / 96.0);
  v18 = _mm_shuffle_ps(v17, v17, 0);
  *(__m128 *)a1 = _mm_mul_ps(*(__m128 *)a1, v18);
  *((__m128 *)a1 + 1) = _mm_mul_ps(*((__m128 *)a1 + 1), v18);
  v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69400),
      4,
      2,
      15,
      (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids,
      v11);
  }
  return 1;
}
