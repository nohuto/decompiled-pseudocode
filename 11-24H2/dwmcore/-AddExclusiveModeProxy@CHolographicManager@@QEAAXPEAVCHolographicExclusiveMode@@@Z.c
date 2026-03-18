/*
 * XREFs of ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CE61C
 * Callers:
 *     ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1802D1660 (--0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1802CE278 (--$_Emplace_reallocate@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::AddExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2,
        __int64 a3)
{
  struct CHolographicExclusiveMode **i; // rax
  _QWORD *v6; // rdx
  CHolographicInteropTaskQueue *v7; // rcx
  CCachedVisualImage *v8; // [rsp+50h] [rbp+8h] BYREF

  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11);
        ++i )
  {
    if ( *i == a2 )
      return;
  }
  v8 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((struct CHolographicExclusiveMode *)((char *)a2 + 8));
  v6 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v6 == *((_QWORD **)this + 12) )
  {
    std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>(
      (__int64 *)this + 10,
      (__int64)v6,
      (__int64 *)&v8);
  }
  else
  {
    v8 = 0LL;
    *v6 = a2;
    *((_QWORD *)this + 11) += 8LL;
  }
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    &v8,
    (__int64)v6,
    a3);
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        v7,
        0x1Du,
        (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
