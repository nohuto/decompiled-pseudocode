/*
 * XREFs of ?IsGameDVRGroupPolicyEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059D98
 * Callers:
 *     ?QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z @ 0x180059574 (-QueueNotifyGameBarForKGLUpdateIfNecessary@BroadcastDVRComponent@@AEAAJPEAK0@Z.c)
 *     ?IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x180059CD0 (-IsGameDVREnabled@BroadcastDVRComponent@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall BroadcastDVRComponent::IsGameDVRGroupPolicyEnabled(BroadcastDVRComponent *this)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx
  ULONGLONG v4; // rsi
  bool v6; // di
  LSTATUS ValueW; // eax
  bool v8; // sf
  bool v9; // zf
  int pvData; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  TickCount64 = GetTickCount64();
  v3 = *((_QWORD *)this + 63);
  v4 = TickCount64;
  if ( !v3 || TickCount64 >= v3 + 43200000 )
  {
    v6 = 1;
    pcbData = 4;
    pvData = 1;
    v11 = 1;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
               L"AllowGameDVR",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
    v8 = ValueW < 0;
    if ( ValueW > 0 )
      v8 = 1;
    if ( v8 )
    {
      if ( (int)PolicyManager_GetPolicyInt(L"ApplicationManagement", L"AllowGameDVR", &v11) < 0 )
      {
LABEL_10:
        *((_BYTE *)this + 446) = v6;
        *((_QWORD *)this + 63) = v4;
        return *((_BYTE *)this + 446);
      }
      v9 = v11 == 0;
    }
    else
    {
      v9 = pvData == 0;
    }
    v6 = !v9;
    goto LABEL_10;
  }
  return *((_BYTE *)this + 446);
}
