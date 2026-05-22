/*
 * XREFs of ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018E4FC
 * Callers:
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C220 (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018DA90 (-RemoveInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180024D1C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180024E94 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800904A8 (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180109450 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@@Z @ 0x18018B7E4 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@.c)
 *     ??0?$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18018BC08 (--0-$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEA.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x18018C9F8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@IS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall PenHapticDevice::UpdateBamoProperties(PenHapticDevice *this)
{
  int v2; // edi
  struct Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 *v6; // r14
  __int64 *v7; // r12
  __int64 *v8; // rdi
  __int64 *i; // rbx
  __int64 v10; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // r13
  int inserted; // r13d
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+28h] [rbp-58h]
  Microsoft::BamoImpl::BamoImplObject *v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  int v19; // [rsp+C0h] [rbp+40h]
  _QWORD *v20; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v21; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v20 = operator new(0x50uLL);
  v4 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::ListPrincipal<SimpleHapticsControllerFeedback>(
         v20,
         BamoServerConnection);
  v5 = v4;
  v21 = v4;
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))*v4)(v4);
  v6 = (__int64 *)*((_QWORD *)this + 9);
  v7 = (__int64 *)*((_QWORD *)this + 10);
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
        (__int64 *)&v20,
        v6);
      std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>(
        (__int64)v16,
        (__int64)(v20 + 3));
      v19 = v2 | 1;
      v8 = v17;
      for ( i = (__int64 *)*v17; i != v8; i = (__int64 *)*i )
      {
        v13 = i[2];
        v14 = *((_DWORD *)i + 6);
        v10 = *(_QWORD *)(v5[4] + 32LL);
        if ( *(int *)(v10 + 8) <= 0 )
          v11 = 0LL;
        else
          v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
        Microsoft::Bamo::Lock::Lock(v15, v11);
        inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InsertWorker(
                     (__int64)v5,
                     v11,
                     (__int64)(v5[8] - v5[7]) >> 3,
                     (const struct SimpleHapticsControllerFeedback *)((char *)&v13 + 4));
        Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v15);
        if ( inserted < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x42,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticsdevice.cpp",
            (const char *)(unsigned int)inserted,
            v13);
      }
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((__int64)v16);
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v20);
      if ( ++v6 == v7 )
        break;
      v2 = v19;
    }
  }
  (*(void (__fastcall **)(char *, _QWORD *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, v5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v21);
}
