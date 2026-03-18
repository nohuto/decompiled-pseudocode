/*
 * XREFs of ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x14019D028
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054B24 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 Length; // r11
  unsigned int v5; // ebx
  const unsigned __int16 *v7; // r14
  unsigned __int64 v9; // r9
  unsigned int v10; // esi
  unsigned int i; // edi
  int v12; // eax
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  struct _UNICODE_STRING v16; // [rsp+20h] [rbp-28h]
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0;
  v17 = 0LL;
  *(_DWORD *)(&v16.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v9 = 0LL;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 6 || !Length )
      return v10;
    v7 += v9 >> 1;
    v16.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &v17);
    v10 = v12;
    if ( v12 < 0 )
      break;
    v9 = v17;
    v16.Length = v17;
    if ( v13 > v17 )
    {
      v9 = v17 + 2;
      v17 += 2LL;
    }
    Length = v13 - (unsigned __int16)v9;
    v16.MaximumLength = v9;
    v14 = i;
    a3[v14] = v16;
  }
  WdLogSingleEntry3(3LL, i, *((_QWORD *)this + 2), v12);
  WdLogGlobalForLineNumber = 3723;
  if ( !i )
    return v10;
  return v5;
}
