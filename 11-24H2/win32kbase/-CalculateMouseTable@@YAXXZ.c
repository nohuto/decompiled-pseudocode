/*
 * XREFs of ?CalculateMouseTable@@YAXXZ @ 0x1400A3940
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall CalculateMouseTable(__int64 a1)
{
  __int64 v1; // rsi
  __int64 UserSessionState; // r9
  int v3; // edi
  int v4; // r11d
  unsigned int v5; // r15d
  int v6; // ebp
  int v7; // r14d
  int v8; // r10d
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = 256LL;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = 50 * *(_DWORD *)(UserSessionState + 20640);
  v4 = 0;
  v5 = 50000 * *(_DWORD *)(UserSessionState + 20640) / (unsigned int)(20 * *(_DWORD *)(UserSessionState + 20644));
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = v4 + v5;
    v4 = v3;
    if ( v10 <= v3 )
      v4 = v10;
    v6 += v4;
    v11 = (v6 - 1000 * v7 + 500) / 1000;
    v7 += v11;
    if ( v4 < v3 )
    {
      if ( v9 < 128 )
      {
        v13 = v9++;
        *(_BYTE *)(v13 + UserSessionState + 20685) = v11;
      }
    }
    else if ( v4 == v3 && v8 < 128 )
    {
      v12 = v8++;
      *(_BYTE *)(v12 + UserSessionState + 20814) = v11;
    }
    --v1;
  }
  while ( v1 );
  *(_BYTE *)(UserSessionState + 20684) = v9;
  *(_BYTE *)(UserSessionState + 20813) = v8;
}
