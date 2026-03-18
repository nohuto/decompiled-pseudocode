/*
 * XREFs of ??1CFormatConverter@@MEAA@XZ @ 0x1802E56B0
 * Callers:
 *     ??_GCFormatConverter@@MEAAPEAXI@Z @ 0x1802E5770 (--_GCFormatConverter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1802E5710 (--1CScanPipeline@@UEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CFormatConverter::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  operator delete(*((void **)this + 96));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 104));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
