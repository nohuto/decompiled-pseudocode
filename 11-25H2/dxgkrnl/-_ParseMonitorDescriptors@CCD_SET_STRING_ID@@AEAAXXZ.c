/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14036C59C
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14036C45C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x14036CC14 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x14036BF48 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 *     ?_SortNormOrder@CCD_SET_STRING_ID@@AEAAXII@Z @ 0x14036C880 (-_SortNormOrder@CCD_SET_STRING_ID@@AEAAXII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  unsigned int v5; // edx
  void *v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // bp
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int i; // edi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r14

  if ( *((_WORD *)this + 4) )
  {
    v2 = 0;
    v3 = 1;
    v4 = 0;
    do
    {
      v5 = *(char *)(v4 + *((_QWORD *)this + 2));
      if ( v5 == 42 || v5 == 43 )
      {
        ++v3;
        if ( v2 )
        {
          if ( v2 != 43 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2122;
          }
        }
        else
        {
          v2 = 43;
        }
      }
      else if ( v5 == 94 || v5 == 126 )
      {
        ++v3;
        if ( v2 )
        {
          if ( v2 != (_BYTE)v5 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2106;
          }
        }
        else
        {
          v2 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
        }
      }
      ++v4;
    }
    while ( v4 < *((unsigned __int16 *)this + 4) );
    if ( v3 <= *((_WORD *)this + 16) )
      goto LABEL_12;
    v6 = (void *)*((_QWORD *)this + 3);
    *((_WORD *)this + 16) = 0;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    v8 = 8LL * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x63644356u, 256LL, v7);
    *((_QWORD *)this + 3) = v9;
    if ( v9 )
    {
LABEL_12:
      v10 = 0;
      v11 = 0;
      **((_QWORD **)this + 3) = 0LL;
      LOWORD(v12) = *((_WORD *)this + 4);
      *((_WORD *)this + 16) = 1;
      if ( (_WORD)v12 )
      {
        while ( 1 )
        {
          v5 = *(char *)(v11 + *((_QWORD *)this + 2)) - 42;
          if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 42 )
            goto LABEL_21;
          v5 = *(char *)(v11 + *((_QWORD *)this + 2)) - 43;
          if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 43 )
            break;
          v5 = *(char *)(v11 + *((_QWORD *)this + 2)) - 94;
          if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 94 || *(_BYTE *)(v11 + *((_QWORD *)this + 2)) == 126 )
            break;
LABEL_17:
          v12 = *((unsigned __int16 *)this + 4);
          if ( ++v11 >= v12 )
            goto LABEL_18;
        }
        ++v10;
LABEL_21:
        if ( v11 + 1 == (unsigned __int16)v12 )
        {
          *((_WORD *)this + 4) = v12 - 1;
        }
        else
        {
          if ( *((_WORD *)this + 16) >= v3 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2187;
          }
          if ( *((_WORD *)this + 16) < v3 )
          {
            v5 = v11 + 1;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16)) = v11 + 1;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v10;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
          }
        }
        goto LABEL_17;
      }
LABEL_18:
      CCD_SET_STRING_ID::_SortNormOrder(this, v5, *((unsigned __int16 *)this + 16) - 1);
      for ( i = 1; i < *((unsigned __int16 *)this + 16); ++i )
      {
        v14 = *((_QWORD *)this + 3);
        v15 = *(unsigned __int16 *)(v14 + 8LL * (i - 1) + 6);
        v16 = *(unsigned __int16 *)(v14 + 8LL * i + 6);
        if ( !CCD_SET_STRING_ID::_CompareDescriptors(this, *(unsigned __int16 *)(v14 + 8LL * i + 6)) )
          *(_WORD *)(v14 + 8 * v16 + 4) = *(_WORD *)(v14 + 8 * v15 + 4) + 1;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, v3);
      WdLogGlobalForLineNumber = 2145;
      *(_DWORD *)this = -1073741801;
    }
  }
  else
  {
    *((_WORD *)this + 16) = 0;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
}
