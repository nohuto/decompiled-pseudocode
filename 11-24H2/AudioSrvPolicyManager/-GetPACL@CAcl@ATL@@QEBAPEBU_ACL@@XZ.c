/*
 * XREFs of ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180010850
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800106C0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18001E4A4 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18001F930 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct _ACL *__fastcall ATL::CAcl::GetPACL(ATL::CAcl *this)
{
  DWORD v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rax
  struct _ACL *v6; // rax
  int Error; // edi
  unsigned int i; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  DWORD nAceListLength; // edi
  void *v12; // rax
  int v13; // edi

  if ( !*((_QWORD *)this + 1) && !*((_BYTE *)this + 16) )
  {
    v2 = 8;
    v3 = 0;
    v4 = (*(__int64 (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 8LL))(this);
    if ( v4 )
    {
      do
      {
        v5 = (*(__int64 (__fastcall **)(ATL::CAcl *, _QWORD))(*(_QWORD *)this + 32LL))(this, v3);
        if ( v5 )
          v2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        ++v3;
      }
      while ( v3 < v4 );
    }
    v6 = (struct _ACL *)malloc(v2);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeAcl(v6, v2, *((_DWORD *)this + 5)) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
    (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 40LL))(this);
    for ( i = 0; i < v4; ++i )
    {
      v9 = (*(__int64 (__fastcall **)(ATL::CAcl *, _QWORD))(*(_QWORD *)this + 32LL))(this, i);
      v10 = v9;
      if ( v9 )
      {
        nAceListLength = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v12 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( AddAce(*((PACL *)this + 1), *((_DWORD *)this + 5), 0xFFFFFFFF, v12, nAceListLength) )
          continue;
      }
      v13 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v13);
    }
  }
  return (const struct _ACL *)*((_QWORD *)this + 1);
}
