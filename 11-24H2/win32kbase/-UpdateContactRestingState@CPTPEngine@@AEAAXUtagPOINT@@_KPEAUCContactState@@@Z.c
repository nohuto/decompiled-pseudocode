/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1400E83B8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1400E86C0 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct tagPOINT a2,
        __int64 a3,
        struct CContactState *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // r11
  int v7; // r9d
  __int64 v8; // rax
  int v10; // ecx
  __int64 v11; // rsi
  int v12; // r10d
  bool v14; // di
  char v15; // r8
  int v16; // r12d
  __int16 v17; // si
  struct CContactState *v18; // r8
  __int64 v19; // rax
  int v20; // r9d
  unsigned int v21; // ecx
  LONG y; // [rsp+6Ch] [rbp+14h]

  y = a2.y;
  v4 = *((_QWORD *)a4 + 8);
  v5 = a3 - *((_QWORD *)a4 + 11);
  v7 = *(_DWORD *)a4;
  v8 = a3 - v4;
  v10 = *((_DWORD *)this + 706);
  v11 = a3;
  v12 = -__CFSHR__(v7, 9);
  v14 = 0;
  if ( v10 == 3 || (v15 = 0, v10 == 6) )
    v15 = 1;
  if ( (v7 & 0x200) == 0 )
  {
    if ( v8 )
    {
      if ( !*((_DWORD *)a4 + 36) )
      {
        v7 |= 0x200u;
        *(_DWORD *)a4 = v7;
      }
      goto LABEL_5;
    }
LABEL_24:
    if ( !v15 && !*((_DWORD *)this + 6) )
      v14 = 1;
    goto LABEL_16;
  }
  if ( !v8 )
    goto LABEL_24;
LABEL_5:
  if ( 10 * v5 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 783) / 0x3E8 )
    return;
  v16 = 0;
  if ( (v7 & 0x400) != 0 )
  {
    v20 = 0;
  }
  else if ( v15 )
  {
    v20 = -__CFSHR__(v7, 12);
  }
  else
  {
    v17 = v7;
    if ( *((_DWORD *)this + 706) == 2 )
    {
      if ( v12 )
      {
        v18 = (CPTPEngine *)((char *)this + 328 * *((unsigned int *)this + 696) + 816);
        if ( a4 != v18
          && (*(_DWORD *)v18 & 0x100) == 0
          && (a2.y >= *((_DWORD *)this + 753) || v4 < *((_QWORD *)v18 + 12))
          && !(unsigned int)CPTPEngine::AreTheseTwoContactsAPan(this, a4, v18) )
        {
          v16 = 1;
        }
      }
    }
    if ( (v17 & 0x200) != 0 )
      v19 = *((unsigned int *)a4 + 36);
    else
      v19 = 0LL;
    v20 = v16;
    v11 = a3;
    if ( (int)((*(_QWORD *)((char *)a4 + 8 * v19 + 148) - a2.x) * (*(_QWORD *)((char *)a4 + 8 * v19 + 148) - a2.x)
             + (HIDWORD(*(_QWORD *)((char *)a4 + 8 * v19 + 148)) - y)
             * (HIDWORD(*(_QWORD *)((char *)a4 + 8 * v19 + 148)) - y)) <= (unsigned __int64)*((unsigned int *)this + 782) )
      v20 = 1;
  }
  v14 = v20 != 0;
LABEL_16:
  CPTPEngine::SetContactRestingState(this, a4, v14);
  *(struct tagPOINT *)((char *)a4 + 8 * *((unsigned int *)a4 + 36) + 148) = a2;
  v21 = *((_DWORD *)a4 + 36) + 1;
  *((_QWORD *)a4 + 11) = v11;
  *((_DWORD *)a4 + 36) = v21 % 0xA;
}
