/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18018F688
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18022BC24 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018F780 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        _QWORD *a2,
        char a3,
        _DWORD *a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 **v11; // rax

  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( a3 )
  {
    v8 = *(__int64 **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v9 = *v8;
      if ( *(__int64 **)(*v8 + 8) == v8 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(v9 + 8) = a1;
        goto LABEL_5;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  v8 = *(__int64 **)(a1 + 8);
  if ( *v8 != a1 )
    goto LABEL_15;
  v11 = (__int64 **)v8[1];
  if ( *v11 != v8 )
    goto LABEL_15;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = (__int64 *)a1;
LABEL_5:
  if ( v8 != (__int64 *)a1 )
  {
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(a2, v8 + 2);
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v8 + 2);
      operator delete(v8, 0x18uLL);
    }
    --*(_DWORD *)(a1 + 16);
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return a2;
}
