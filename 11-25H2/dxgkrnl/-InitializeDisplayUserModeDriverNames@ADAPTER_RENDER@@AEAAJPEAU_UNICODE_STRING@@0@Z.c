/*
 * XREFs of ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019CC40
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054B24 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 Length; // rbx
  unsigned __int64 v5; // r9
  unsigned int v6; // edx
  const unsigned __int16 *v7; // rdi
  unsigned int i; // r11d
  int v11; // eax
  unsigned int v12; // r11d
  __int64 result; // rax
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-18h]
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0LL;
  v6 = 0;
  v15 = 0LL;
  *(_DWORD *)(&v14.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  for ( i = 0; !i && Length; i = v12 + 1 )
  {
    v7 += v5 >> 1;
    v14.Buffer = (wchar_t *)v7;
    v11 = RtlStringCbLengthW(v7, Length, &v15);
    v6 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v12, *((_QWORD *)this + 2), v11);
      result = 0LL;
      WdLogGlobalForLineNumber = 3789;
      return result;
    }
    v5 = v15;
    v14.Length = v15;
    if ( Length > v15 )
    {
      v5 = v15 + 2;
      v15 += 2LL;
    }
    v14.MaximumLength = v5;
    Length -= (unsigned __int16)v5;
    a3[v12] = v14;
  }
  return v6;
}
