/*
 * XREFs of ?GetEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140072F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetEffectsListRemote(
        CSystemEffectWrapper *this,
        struct _GUID **a2,
        unsigned int *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  if ( *((_QWORD *)this + 14) )
    return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 24LL))((char *)this - 64);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x383,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
