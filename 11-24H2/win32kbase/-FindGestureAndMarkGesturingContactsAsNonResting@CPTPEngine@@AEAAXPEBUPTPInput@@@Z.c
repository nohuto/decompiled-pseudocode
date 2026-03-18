/*
 * XREFs of ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1400E8228
 * Callers:
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1400E7B6C (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 * Callees:
 *     ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1400E7A84 (-AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1400E86C0 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 */

void __fastcall CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
        CPTPEngine *this,
        const struct PTPInput *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rsi
  int v6; // eax
  __int64 i; // rbp
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  struct CContactState *v11; // r14
  struct CContactState *v12; // rdi
  int v13; // r13d
  struct CContactState *v14; // rax
  unsigned int v15; // [rsp+50h] [rbp+8h]

  if ( (*((_DWORD *)this + 821) & 4) != 0 )
  {
    v4 = *((_DWORD *)a2 + 12);
    v5 = 0LL;
    v15 = v4;
    while ( (unsigned int)v5 < v4 )
    {
      v6 = *((_DWORD *)a2 + 24 * v5 + 17);
      if ( v6 && (v6 & 0x40000) == 0 )
      {
        for ( i = (unsigned int)(v5 + 1); (unsigned int)i < v4; i = (unsigned int)(i + 1) )
        {
          v8 = *((_DWORD *)a2 + 24 * i + 17);
          if ( v8 && (v8 & 0x40000) == 0 )
          {
            v9 = *((_DWORD *)this + 4);
            v10 = *((_DWORD *)a2 + 24 * i + 15) % v9;
            v11 = (CPTPEngine *)((char *)this + 328 * (*((_DWORD *)a2 + 24 * v5 + 15) % v9) + 816);
            v12 = (CPTPEngine *)((char *)this + 328 * v10 + 816);
            if ( (*(_DWORD *)v11 & 0x100000) != 0
              && (*(_DWORD *)v12 & 0x100000) != 0
              && (*((_DWORD *)v11 + 1) & 1) != 0
              && (*((_DWORD *)v12 + 1) & 1) != 0 )
            {
              if ( *((_DWORD *)this + 706) != 2
                || (v14 = (CPTPEngine *)((char *)this + 328 * *((unsigned int *)this + 696) + 816), v12 == v14)
                || v11 == v14 )
              {
                if ( (v13 = CPTPEngine::AreTheseTwoContactsAPan(
                              this,
                              v11,
                              (CPTPEngine *)((char *)this + 328 * v10 + 816))) == 0
                  && (unsigned int)CPTPEngine::AreTheseTwoContactsAZoom(this, v11, v12)
                  || v13 )
                {
                  CPTPEngine::SetContactRestingState(this, v11, 0);
                  CPTPEngine::SetContactRestingState(this, v12, 0);
                  return;
                }
              }
            }
            v4 = v15;
          }
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
  }
}
