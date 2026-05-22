/*
 * XREFs of ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x180110F20
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180112158 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180110E70 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 */

struct tagPOINT __fastcall ManipulationInjector::ComputeSafeDelta(
        ManipulationInjector *this,
        struct tagRECT **a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        LONG *a5)
{
  __int64 v6; // rsi
  struct tagRECT *v7; // rbx
  LONG v9; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagPOINT v12; // [rsp+50h] [rbp+8h] BYREF
  struct tagRECT *v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  v6 = 152LL * (unsigned int)a3.x;
  v7 = a4;
  v9 = *(_DWORD *)((char *)this + v6 + 148) + HIDWORD(a4);
  v12.x = (_DWORD)a4 + *(_DWORD *)((char *)this + v6 + 144);
  v12.y = v9;
  v11.left = *a5;
  v11.top = a5[1];
  v11.right = a5[2] - 1;
  v11.bottom = a5[3] - 1;
  if ( ManipulationInjector::Clip(this, &v12, &v11, 0) )
  {
    LODWORD(v13) = v12.x - *(_DWORD *)((char *)this + v6 + 144);
    HIDWORD(v13) = v12.y - *(_DWORD *)((char *)this + v6 + 148);
    v7 = v13;
  }
  *a2 = v7;
  return (struct tagPOINT)a2;
}
