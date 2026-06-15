/*
 * XREFs of ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x1800EC4D8
 * Callers:
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800BF370 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x1800EA578 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x1800EDB0C (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::Create(
        struct IAudioResourceControl *a1,
        struct CConstraintModelResourceManager **a2)
{
  int v4; // ebx
  CConstraintModelResourceManager *v5; // rax
  CConstraintModelResourceManager *v6; // rdi

  if ( a2 )
  {
    v5 = (CConstraintModelResourceManager *)operator new(0x120uLL);
    if ( v5 )
      v6 = CConstraintModelResourceManager::CConstraintModelResourceManager(v5);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v4 = CConstraintModelResourceManager::Initialize(v6, a1);
      if ( v4 < 0 )
        (*(void (__fastcall **)(CConstraintModelResourceManager *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      else
        *a2 = v6;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v4;
}
