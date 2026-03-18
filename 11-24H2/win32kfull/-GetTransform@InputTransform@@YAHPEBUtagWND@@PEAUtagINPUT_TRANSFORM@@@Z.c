/*
 * XREFs of ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x14018101C
 * Callers:
 *     EditionGetInputTransform @ 0x14021BB70 (EditionGetInputTransform.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  CompositionInputObject *v8; // rcx
  __int64 result; // rax
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-18h]
  const struct CInputSink *v17; // [rsp+80h] [rbp+18h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3) )
  {
    v10 = PtiCurrent(v6, v5);
    if ( v10 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v12, v11) + 18880) )
      return 0LL;
  }
  v7 = *((_QWORD *)this + 34);
  if ( !v7 )
    return 0LL;
  v8 = *(CompositionInputObject **)(v7 + 96);
  if ( !v8 )
    return 0LL;
  v17 = 0LL;
  if ( (int)CompositionInputObject::LockForRead(v8, &v17) < 0 )
    return 0LL;
  v13 = *(_OWORD *)((char *)v17 + 88);
  v14 = *(_OWORD *)((char *)v17 + 104);
  v15 = *(_OWORD *)((char *)v17 + 120);
  v16 = *(_OWORD *)((char *)v17 + 136);
  CInputSink::UnlockAndRelease(v17);
  result = 1LL;
  *(_OWORD *)a2 = v13;
  *((_OWORD *)a2 + 1) = v14;
  *((_OWORD *)a2 + 2) = v15;
  *((_OWORD *)a2 + 3) = v16;
  return result;
}
