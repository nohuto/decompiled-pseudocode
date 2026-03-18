/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x14007FB9C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned __int64 a5)
{
  char *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  signed int v11; // ebx
  __int64 v12; // r14
  int v13; // eax
  unsigned int v14; // ecx
  __int64 i; // rax
  __int64 v16; // rcx
  struct DirectComposition::CResourceMarshaler *v18; // rax
  _BYTE v19[16]; // [rsp+40h] [rbp-38h] BYREF

  v19[0] = 0;
  v7 = 0LL;
  v8 = 0LL;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v11 = v10 == 0LL ? 0xC0000022 : 0;
  if ( a5 )
  {
    if ( v10 )
    {
      v8 = 8 * a5;
      if ( is_mul_ok(a5, 8uLL) )
      {
        v11 = 0;
      }
      else
      {
        v8 = -1LL;
        v11 = -1073741675;
      }
    }
    if ( v11 >= 0 )
    {
      v7 = (char *)Win32AllocPoolWithQuotaImpl(v9, v8, 0x66624344u);
      if ( !v7 )
        return (unsigned int)-1073741801;
    }
    v12 = 0LL;
    if ( v11 < 0 )
      goto LABEL_8;
    while ( (unsigned int)v12 < a5 )
    {
      v18 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a4[v12]);
      *(_QWORD *)&v7[8 * v12] = v18;
      if ( !v18 )
      {
        v11 = -1073741811;
        goto LABEL_8;
      }
      v12 = (unsigned int)(v12 + 1);
    }
  }
  else if ( !v10 )
  {
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, char *, unsigned __int64, _BYTE *))(*(_QWORD *)v10 + 296LL))(
          v10,
          this,
          a3,
          v7,
          a5,
          v19);
  if ( v11 < 0 )
  {
LABEL_8:
    if ( v7 )
      GreDeleteFastMutex(v7);
    return (unsigned int)v11;
  }
  if ( v19[0] )
  {
    v13 = *((_DWORD *)v10 + 4);
    if ( (v13 & 2) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v14 = *((_DWORD *)v10 + 9);
        for ( i = v14; (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
        {
          if ( (_DWORD)i == 158 )
          {
            v16 = 456LL;
            goto LABEL_20;
          }
        }
        while ( 1 )
        {
          if ( v14 >= 0xC2 )
          {
            v16 = 440LL;
            goto LABEL_20;
          }
          if ( v14 == 28 )
            break;
          v14 = dword_140270F80[v14];
        }
        v16 = 472LL;
LABEL_20:
        *((_QWORD *)v10 + 1) = *(_QWORD *)((char *)this + v16);
        *(_QWORD *)((char *)this + v16) = v10;
      }
      *((_DWORD *)v10 + 4) |= 2u;
      *((_BYTE *)this + 264) |= 1u;
    }
  }
  return (unsigned int)v11;
}
