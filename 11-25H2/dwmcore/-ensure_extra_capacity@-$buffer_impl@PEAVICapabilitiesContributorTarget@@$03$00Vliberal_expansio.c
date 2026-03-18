/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C3124
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C2FDC (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  void *v9; // rax
  const void *v10; // rbx
  signed __int64 v11; // rdi
  void *v12; // rsi
  void *v13; // rax
  void *v14; // rcx
  bool v15; // zf
  const void *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v3 = a1[1];
  result = ((_BYTE *)a1[2] - v3) >> 3;
  if ( result < a2 )
  {
    v5 = (v3 - (_BYTE *)*a1) >> 3;
    v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
    v7 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = v6 >> 1;
    if ( v6 <= ~(v6 >> 1) && v8 + v6 >= v7 )
      v7 = v8 + v6;
    v9 = operator new[](saturated_mul(v7, 8uLL));
    v10 = *a1;
    *(_QWORD *)&v17 = v9;
    v11 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    *((_QWORD *)&v17 + 1) = v5;
    v12 = v9;
    v18 = v17;
    v19 = 0LL;
    v13 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                    &v18,
                    v11 >> 3);
    memmove_0(v13, v10, v11);
    v14 = (void *)*a1;
    v15 = *a1 == a1 + 3;
    *a1 = v12;
    if ( v15 )
      v14 = 0LL;
    operator delete(v14);
    v16 = *a1;
    a1[1] = (char *)*a1 + 8 * v5;
    result = (unsigned __int64)v16 + 8 * v7;
    a1[2] = (const void *)result;
  }
  return result;
}
