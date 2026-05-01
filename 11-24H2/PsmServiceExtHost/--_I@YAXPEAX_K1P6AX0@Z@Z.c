/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180073DD0
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180086730 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012E28 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rdi
  __int64 *v5; // rbx

  v4 = 2LL;
  v5 = (__int64 *)(a1 + 16);
  do
  {
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(--v5);
    --v4;
  }
  while ( v4 );
}
