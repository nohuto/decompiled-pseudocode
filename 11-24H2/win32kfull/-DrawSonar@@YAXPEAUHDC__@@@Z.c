/*
 * XREFs of ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x14023A12C
 * Callers:
 *     zzzAnimateFade @ 0x14023A678 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GreCreatePen @ 0x1400E3838 (GreCreatePen.c)
 *     GreEllipse @ 0x1400E65B0 (GreEllipse.c)
 */

void __fastcall DrawSonar(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  HBRUSH SolidBrush; // rsi
  __int64 UserSessionState; // rbx
  int v6; // r13d
  INT v7; // r12d
  INT v8; // eax
  __int64 Pen; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  RECT v18; // [rsp+30h] [rbp-38h] BYREF
  INT v19; // [rsp+78h] [rbp+10h]

  SolidBrush = (HBRUSH)GreCreateSolidBrush(16711935LL);
  if ( SolidBrush )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v6 = *(_DWORD *)(UserSessionState + 16324);
    v7 = EngMulDiv(100, *(_DWORD *)(UserSessionState + 16336), 96);
    v8 = EngMulDiv(4, *(_DWORD *)(UserSessionState + 16336), 96);
    v18.left = 0;
    v18.top = 0;
    v18.right = 2 * v7;
    v18.bottom = 2 * v7;
    v19 = v8;
    FillRect(a1, &v18, SolidBrush);
    Pen = GreCreatePen(0, 0, 0xFFFFFF, 0LL);
    v10 = Pen;
    if ( Pen )
    {
      v11 = GreSelectPen(a1, Pen);
      v12 = GreCreateSolidBrush(8421504LL);
      v14 = v12;
      if ( v12 )
      {
        v15 = GreSelectBrush(a1, v12, v13);
        GreEllipse(a1, v7 - v6, v7 - v6, v7 + v6, v7 + v6);
        GreSelectBrush(a1, SolidBrush, v16);
        GreEllipse(a1, v19 - v6 + v7, v19 - v6 + v7, v6 + v7 - v19, v6 + v7 - v19);
        GreSelectBrush(a1, v15, v17);
        GreDeleteObject(v14);
      }
      GreSelectPen(a1, v11);
      GreDeleteObject(v10);
    }
    GreDeleteObject(SolidBrush);
  }
}
