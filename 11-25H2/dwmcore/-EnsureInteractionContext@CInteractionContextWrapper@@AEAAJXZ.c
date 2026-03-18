/*
 * XREFs of ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x18020991C
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1802098E0 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1802C0690 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x18020999C (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 */

__int64 __fastcall CInteractionContextWrapper::EnsureInteractionContext(CInteractionContextWrapper *this)
{
  __int64 result; // rax
  struct HINTERACTIONCONTEXT__ **v2; // rbx
  struct HINTERACTIONCONTEXT__ *v4; // rdx
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+31h] [rbp-17h]
  __int16 v8; // [rsp+35h] [rbp-13h]
  char v9; // [rsp+37h] [rbp-11h]

  result = 0LL;
  v2 = (struct HINTERACTIONCONTEXT__ **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    result = CreateInteractionContext((char *)this + 16);
    if ( (int)result >= 0 )
    {
      v5[1] = 0;
      v4 = *v2;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v5[0] = 2;
      v5[2] = 1110704128;
      v5[3] = 1110704128;
      v6 = 0;
      return CInteractionContextWrapper::ConfigureInteractionContext(this, v4, (const struct SetupInfo *)v5);
    }
  }
  return result;
}
