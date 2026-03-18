/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140030984
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x140099B4C (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 * Callees:
 *     <none>
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(CFlipToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  char v6; // si
  __int64 *i; // rax
  HANDLE CurrentThreadId; // rax
  __int64 v9; // rcx
  CFlipToken *result; // rax

  *((_DWORD *)this + 6) = 6;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 7) = a2;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 6) = a3;
  ObReferenceObjectByPointer(a3, 3u, g_pDxgkCompositionObjectType, 0);
  v4 = *((_QWORD *)this + 6);
  v5 = *((_QWORD *)this + 7);
  *(_QWORD *)this = &CFlipToken::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_DWORD *)((char *)this + 577) = 0;
  *(_DWORD *)((char *)this + 581) = 256;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 48, 0LL);
  v6 = 0;
  if ( *(_DWORD *)(v4 + 136) )
  {
    for ( i = *(__int64 **)(v4 + 120); i != (__int64 *)(v4 + 120); i = (__int64 *)*i )
    {
      if ( *(i - 1) == v5 )
      {
        v6 = *((_BYTE *)i + 17);
        break;
      }
    }
  }
  CurrentThreadId = PsGetCurrentThreadId();
  v9 = v4 + 48;
  if ( CurrentThreadId == *(HANDLE *)(v4 + 56) )
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v9, 0LL);
  }
  KeLeaveCriticalRegion();
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_BYTE *)this + 576) = v6 == 0;
  result = this;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *(_QWORD *)((char *)this + 204) = 1065353216LL;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 27) = 1065353216LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
