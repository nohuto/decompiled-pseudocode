/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x1800AEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180057F04 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800AE330 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??A?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@1@_K@Z @ 0x1800AE378 (--A-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x1800AEAF0 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 i; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  const struct ATL::CDacl::CAccessAce **v9; // rax
  _QWORD *v10; // rbx
  __int64 (__fastcall ****v11)(_QWORD, __int64); // rax
  __int64 (__fastcall ****v12)(_QWORD, __int64); // rax
  struct ATL::CDacl::CAccessAce *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1LL;
  v3 = *((_QWORD *)this + 4);
  v13 = 0LL;
  v4 = 4LL;
  if ( v3 <= 4 )
    goto LABEL_13;
  do
  {
    v2 = v4;
    v4 += 2 * v4 + 1;
  }
  while ( v4 < v3 );
  if ( v2 )
  {
LABEL_13:
    do
    {
      for ( i = v2 - 1; i < v3; ++i )
      {
        v6 = (_QWORD *)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                         (_QWORD *)this + 3,
                         i);
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=((__int64 (__fastcall ****)(_QWORD, __int64))&v13, v6);
        v7 = i;
        if ( i >= v2 )
        {
          do
          {
            v8 = v7 - v2;
            v9 = (const struct ATL::CDacl::CAccessAce **)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                                                           (_QWORD *)this + 3,
                                                           v7 - v2);
            if ( (unsigned int)ATL::CDacl::CAccessAce::Order(*v9, v13) != -1 )
              break;
            v10 = (_QWORD *)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                              (_QWORD *)this + 3,
                              v7 - v2);
            v11 = (__int64 (__fastcall ****)(_QWORD, __int64))ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                                                                (_QWORD *)this + 3,
                                                                v7);
            ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v11, v10);
            v7 -= v2;
          }
          while ( v8 >= v2 );
        }
        v12 = (__int64 (__fastcall ****)(_QWORD, __int64))ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::operator[](
                                                            (_QWORD *)this + 3,
                                                            v7);
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v12, &v13);
      }
      v2 /= 3uLL;
    }
    while ( v2 );
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free((__int64 (__fastcall ****)(_QWORD, __int64))&v13);
}
