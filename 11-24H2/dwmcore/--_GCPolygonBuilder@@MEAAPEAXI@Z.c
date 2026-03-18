/*
 * XREFs of ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180017EA0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180017D30 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180018090 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::`scalar deleting destructor'(CPolygonBuilder *this, char a2)
{
  __int64 v3; // rcx
  CPolygonBuilder *v5; // rdi
  __int64 v6; // rax
  int Current; // eax
  struct CThreadContext *v8; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 3);
  v5 = (CPolygonBuilder *)*((_QWORD *)this + 2);
  v6 = (v3 - (__int64)v5) >> 3;
  if ( v6 )
    *((_QWORD *)this + 3) = v3 - 8 * v6;
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 == (CPolygonBuilder *)((char *)this + 40) )
    v5 = 0LL;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 360LL);
    }
    else
    {
      v13 = 0LL;
      Current = CThreadContext::GetCurrent(&v13);
      if ( Current < 0 )
        ModuleFailFastForHRESULT(Current, retaddr);
      v8 = v13;
      if ( *((_DWORD *)v13 + 29) < *((_DWORD *)v13 + 28) )
      {
        *(_QWORD *)this = *((_QWORD *)v13 + 15);
        ++*((_DWORD *)v8 + 29);
        *((_QWORD *)v8 + 15) = this;
      }
      else if ( this )
      {
        v11 = GetProcessHeap();
        HeapFree(v11, 0, this);
      }
    }
  }
  return this;
}
