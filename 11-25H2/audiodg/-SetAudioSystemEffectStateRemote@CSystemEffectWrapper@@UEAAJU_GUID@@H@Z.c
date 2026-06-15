/*
 * XREFs of ?SetAudioSystemEffectStateRemote@CSystemEffectWrapper@@UEAAJU_GUID@@H@Z @ 0x140075A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetAudioSystemEffectStateRemote(
        CSystemEffectWrapper *this,
        struct _GUID *a2,
        int a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 15) )
  {
    v3 = -2147467263;
    v4 = 889LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (__int128)*a2;
  v3 = (*(__int64 (__fastcall **)(char *, __int128 *, bool))(*((_QWORD *)this - 8) + 40LL))(
         (char *)this - 64,
         &v6,
         a3 != 0);
  if ( v3 < 0 )
  {
    v4 = 890LL;
    goto LABEL_3;
  }
  return 0LL;
}
