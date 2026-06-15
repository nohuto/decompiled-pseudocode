/*
 * XREFs of ?RuntimeClassInitialize@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180127D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int __fastcall CommunicationsRemapPolicyRule::RuntimeClassInitialize(
        CommunicationsRemapPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a3 + 2) != 3 )
  {
    v3 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
      (const char *)0x80070057LL);
    return -2147024809;
  }
  if ( *((int *)a3 + 3) >= 6 )
  {
    v3 = 65LL;
    goto LABEL_3;
  }
  if ( *(int *)a3 >= 6 )
  {
    v3 = 66LL;
    goto LABEL_3;
  }
  if ( (*((_DWORD *)a3 + 4) & 2) != 0 )
  {
    v3 = 67LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 344) = *((_DWORD *)a3 + 3) == *(_DWORD *)a3;
  return RemapPolicyRule::RuntimeClassInitialize(this, a2, a3);
}
