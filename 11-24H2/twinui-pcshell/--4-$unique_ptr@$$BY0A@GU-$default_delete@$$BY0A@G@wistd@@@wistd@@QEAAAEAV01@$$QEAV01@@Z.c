/*
 * XREFs of ??4?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031A568
 * Callers:
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A8DE4 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A9774 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::operator=(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *(void **)a2;
  *(_QWORD *)a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4, a2);
  return a1;
}
