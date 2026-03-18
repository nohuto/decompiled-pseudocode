/*
 * XREFs of ??1CBaseExpression@@MEAA@XZ @ 0x18005FCD8
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1800F04A8 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801B7E0C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x1801F8B9C (--1CNaturalAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1801FD7DC (--1CExpression@@MEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1802A5F4C (--1CInjectionAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18005F9E0 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180060420 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800AF020 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(void **this)
{
  CResourceWeakRef *v2; // rcx
  void (*v3)(void); // rax
  void *v4; // rcx
  __int64 i; // rsi
  void *v6; // rcx
  _DWORD *v7; // rax
  _BYTE *v8; // rcx
  void *v9; // rbx
  CPathData *v10; // rcx
  void (*v11)(void); // rax
  HANDLE ProcessHeap; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx

  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)this);
  v2 = (CResourceWeakRef *)this[24];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v2);
    else
      v3();
    this[24] = 0LL;
  }
  if ( (*((_DWORD *)this[39] + 1) & 0x40000000) != 0 )
    --*(_DWORD *)(*((_QWORD *)this[3] + 103) + 152LL);
  v4 = this[25];
  if ( v4 )
  {
    operator delete(v4, 8uLL);
    this[25] = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v13 = *((_QWORD *)this[30] + i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 208LL))(v13, 0LL);
    v14 = *((_QWORD *)this[30] + i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *((_DWORD *)this + 66) = 0;
  v6 = this[30];
  if ( v6 != this[31] )
  {
    operator delete(v6);
    this[30] = this[31];
    *((_DWORD *)this + 65) = *((_DWORD *)this + 64);
  }
  v7 = this[39];
  if ( v7 != (_DWORD *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( v7[1] && *((_BYTE *)v7 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(this[39]);
  }
  v8 = this[36];
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, ((_BYTE *)this[38] - v8) & 0xFFFFFFFFFFFFFFF0uLL);
    this[36] = 0LL;
    this[37] = 0LL;
    this[38] = 0LL;
  }
  v9 = this[30];
  if ( v9 != this[31] )
  {
    if ( v9 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
    }
    this[30] = 0LL;
  }
  v10 = (CPathData *)this[18];
  if ( v10 )
  {
    this[18] = 0LL;
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v10);
    else
      v11();
  }
  CResource::~CResource((CResource *)this);
}
