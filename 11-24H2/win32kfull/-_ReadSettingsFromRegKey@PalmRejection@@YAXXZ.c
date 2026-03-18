/*
 * XREFs of ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1402A3FF4
 * Callers:
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1402A3E3C (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1401538F8 (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall PalmRejection::_ReadSettingsFromRegKey(PalmRejection *this)
{
  __int64 v1; // rcx
  __int128 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // edi
  int v6; // ebx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // cf
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const wchar_t *v15; // [rsp+20h] [rbp-40h] BYREF
  int v16; // [rsp+28h] [rbp-38h]
  unsigned int v17; // [rsp+2Ch] [rbp-34h]
  const wchar_t *v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+38h] [rbp-28h]
  unsigned int v20; // [rsp+3Ch] [rbp-24h]
  const wchar_t *v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h]
  unsigned int v23; // [rsp+4Ch] [rbp-14h]

  v1 = 1000LL;
  v15 = L"HorizEdgeThreshold";
  v2 = (__int128 *)&v15;
  v16 = 1000;
  v18 = L"VertEdgeThreshold";
  v3 = 3LL;
  v17 = 1000;
  v19 = 530;
  v20 = 530;
  v21 = L"TopEdgeThreshold";
  v22 = 1000;
  v23 = 1000;
  do
  {
    GetLocalMachineRegistryDWORDValues(
      v1,
      (size_t)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\EdgePalmRejection",
      v2++);
    --v3;
  }
  while ( v3 );
  v5 = 1500;
  v6 = 1500;
  if ( v17 < 0x5DC )
    v6 = v17;
  UserSessionState = W32GetUserSessionState(v1, v4);
  v10 = v20 < 0x5DC;
  *(_DWORD *)(UserSessionState + 17372) = v6;
  v11 = 1500;
  if ( v10 )
    v11 = v20;
  v12 = W32GetUserSessionState(v9, v8);
  if ( v23 < 0x5DC )
    v5 = v23;
  *(_DWORD *)(v12 + 17376) = v11;
  *(_DWORD *)(W32GetUserSessionState(v14, v13) + 17380) = v5;
}
