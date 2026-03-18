/*
 * XREFs of ??1CProcessAttribution@@UEAA@XZ @ 0x1801F3B1C
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1801F3AD0 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1801F3FE4 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x18021E140 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CProcessAttribution::~CProcessAttribution(CProcessAttribution *this)
{
  CProcessAttributionManager *v1; // rdi
  unsigned int v3; // edx
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = qword_1804070A0;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v7,
    *(_QWORD *)v1,
    *((_QWORD *)v1 + 1),
    (char *)this + 16);
  v4 = (char *)v7;
  v5 = *(_QWORD *)v7;
  if ( *(_DWORD *)(*(_QWORD *)v7 + 160LL) )
  {
    *(_OWORD *)(v5 + 8) = *(_OWORD *)((char *)this + 24);
    v6 = *((_DWORD *)this + 10);
    *(_QWORD *)(v5 + 112) = 0LL;
    *(_DWORD *)(v5 + 24) = v6;
  }
  else
  {
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)v5, v3);
    memmove_0(v4, v4 + 8, *((_QWORD *)v1 + 1) - (_QWORD)(v4 + 8));
    *((_QWORD *)v1 + 1) -= 8LL;
  }
}
