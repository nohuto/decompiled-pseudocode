/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x1800F6D50
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x1800F6B60 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6DD4 (--1-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  char *v4; // rsi

  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CManipulation::`vftable'{for `IManipulationResource'};
  v2 = *((_QWORD *)this + 91);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 91) = 0LL;
  }
  v3 = 5LL;
  v4 = (char *)this + 536;
  do
  {
    v4 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v4);
    --v3;
  }
  while ( v3 );
  CResource::~CResource(this);
}
