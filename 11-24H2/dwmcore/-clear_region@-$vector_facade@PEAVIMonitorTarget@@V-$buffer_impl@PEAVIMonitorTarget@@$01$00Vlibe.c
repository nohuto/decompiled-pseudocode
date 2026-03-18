/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18018964C
 * Callers:
 *     ??1?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180189618 (--1-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansi.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180247A80 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  bool v9; // zf
  bool v10; // sf
  char v11; // of
  const void *v12; // rbx
  signed __int64 v13; // rbp
  void *v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  v7 = a2 + a3;
  v8 = (a1[1] - v6) >> 3;
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_11;
  }
  v3 = v6 + 8 * v8;
  if ( v7 != v8 )
  {
    if ( !a2 )
      goto LABEL_9;
    if ( !v6 || (v11 = 0, v9 = a2 == 0, v10 = a2 < 0) )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
LABEL_11:
    if ( !(v10 ^ v11 | v9) && v8 < a2 )
      goto LABEL_6;
LABEL_9:
    v12 = (const void *)(v6 + 8 * v7);
    v15[2] = a2;
    v15[0] = v6;
    v13 = v3 - (_QWORD)v12;
    v15[1] = v8;
    v14 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                    v15,
                    v13 >> 3);
    memmove_0(v14, v12, v13);
  }
  a1[1] += -8 * a3;
}
