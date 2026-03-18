/*
 * XREFs of ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x18005FB50
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18005F9E0 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x18005FC40 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::`scalar deleting destructor'(CPolygonBuilder *this, char a2)
{
  struct CPolygonBuilder *v3; // rcx
  CPolygonBuilder *v5; // rdi
  __int64 v6; // rax
  struct CObjectCache *ObjectCache; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v10; // rax

  v3 = (struct CPolygonBuilder *)*((_QWORD *)this + 3);
  v5 = (CPolygonBuilder *)*((_QWORD *)this + 2);
  v6 = (v3 - v5) >> 3;
  if ( v6 )
  {
    v3 = (struct CPolygonBuilder *)((char *)v3 - 8 * v6);
    *((_QWORD *)this + 3) = v3;
  }
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
      ObjectCache = CThreadContext::GetObjectCache(v3);
      if ( *((_DWORD *)ObjectCache + 1) < *(_DWORD *)ObjectCache )
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
      else if ( this )
      {
        v10 = GetProcessHeap();
        HeapFree(v10, 0, this);
      }
    }
  }
  return this;
}
