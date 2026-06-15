/*
 * XREFs of ??1CPowerReference@@QEAA@XZ @ 0x18000FD18
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCPowerReference@@@std@@EEAAXXZ @ 0x18006EAD0 (-_Destroy@-$_Ref_count_obj2@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

void __fastcall CPowerReference::~CPowerReference(CPowerReference *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v10, (char *)this + 64, g_powerReferenceManager);
    v11[0] = off_180176B38;
    v11[1] = v10[0];
    v11[2] = v10[1];
    v11[7] = v11;
    CSerialWorkQueue::QueueWorkItem(v9 + 256, v11);
  }
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 7);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
