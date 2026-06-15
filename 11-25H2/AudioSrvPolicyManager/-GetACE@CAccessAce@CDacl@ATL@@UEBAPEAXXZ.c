/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180016130
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180021136 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  char *v1; // rbx
  size_t v3; // rbp
  char *v4; // rax
  __int64 v5; // rax
  DWORD LengthSid; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  size_t v9; // rsi
  size_t v10; // rbp
  void *v11; // rcx

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = (char *)malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, v3);
    v1[1] = *((_BYTE *)this + 132);
    v5 = *(_QWORD *)this;
    *((_WORD *)v1 + 1) = v3;
    *v1 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(v5 + 24))(this);
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v9 = v3 - 8;
    v10 = LengthSid;
    v11 = v1 + 8;
    if ( LengthSid )
    {
      if ( v1 == (char *)-8LL )
        goto LABEL_6;
      if ( this == (ATL::CDacl::CAccessAce *)-16LL || v9 < LengthSid )
      {
        memset_0(v11, 0, v9);
        if ( this != (ATL::CDacl::CAccessAce *)-16LL )
        {
          if ( v9 >= v10 )
            goto LABEL_16;
          *(_DWORD *)_o__errno(v11, v7, v8) = 34;
LABEL_15:
          invalid_parameter_noinfo();
LABEL_16:
          ATL::AtlThrowImpl(-2147024809);
        }
LABEL_6:
        *(_DWORD *)_o__errno(v11, v7, v8) = 22;
        goto LABEL_15;
      }
      memcpy_0(v11, (char *)this + 16, LengthSid);
    }
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
