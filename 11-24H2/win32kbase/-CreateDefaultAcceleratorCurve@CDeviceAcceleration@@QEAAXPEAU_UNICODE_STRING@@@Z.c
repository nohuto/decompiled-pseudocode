/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14009EA00
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x14009E8F0 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rdi
  BYTE *Text; // rdx
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v10; // rdi
  ULONG v11; // r15d
  __int64 UserSessionState; // rax
  int v13; // edi
  BYTE *v14; // rdx
  __int64 v15; // rcx
  void *v16; // rsi
  __int64 v17; // rdi
  ULONG v18; // eax
  _BYTE *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __m128i si128; // xmm0
  __m128i v25; // xmm1
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h]
  _OWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  _OWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[40]; // [rsp+B0h] [rbp-50h] BYREF

  if ( !a2 )
    goto LABEL_23;
  Length = 0;
  DestinationString = 0LL;
  v30 = 0LL;
  MessageResourceEntry = 0LL;
  v4 = 0;
  v27 = *(_DWORD *)(W32GetUserSessionState(this) + 62824);
  SourceString[0] = 0;
  v5 = -1LL;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x266u, &MessageResourceEntry) < 0 )
  {
LABEL_35:
    SourceString[v4] = 0;
    goto LABEL_6;
  }
  v6 = -1LL;
  Text = MessageResourceEntry->Text;
  do
    ++v6;
  while ( *(_WORD *)&Text[2 * v6] );
  v4 = v6 - 2;
  if ( v4 >= 0 )
  {
    if ( v4 > 39 )
      v4 = 39;
    memmove(SourceString, Text, 2LL * v4);
    goto LABEL_35;
  }
LABEL_6:
  while ( 1 )
  {
    v9 = (void *)OpenCacheKeyEx(a2);
    if ( !v9 )
      break;
    Length = 52;
    v10 = Win32AllocPoolWithQuotaZInitImpl(v8, 0x34uLL, 0x72707355u);
    if ( !v10 )
      goto LABEL_28;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, (PVOID)v10, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v10 + 8);
      memmove(v33, (const void *)(v10 + 12), Length);
      GreDeleteFastMutex((char *)v10);
      ZwClose(v9);
      v11 = Length;
      goto LABEL_10;
    }
    if ( !v27 )
    {
      GreDeleteFastMutex((char *)v10);
LABEL_28:
      ZwClose(v9);
      break;
    }
    GreDeleteFastMutex((char *)v10);
    ZwClose(v9);
  }
  v11 = 0;
LABEL_10:
  Length = 0;
  DestinationString = 0LL;
  v30 = 0LL;
  UserSessionState = W32GetUserSessionState(v8);
  MessageResourceEntry = 0LL;
  v13 = 0;
  v27 = *(_DWORD *)(UserSessionState + 62824);
  SourceString[0] = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, 0x267u, &MessageResourceEntry) < 0 )
  {
LABEL_39:
    SourceString[v13] = 0;
    goto LABEL_14;
  }
  v14 = MessageResourceEntry->Text;
  do
    ++v5;
  while ( *(_WORD *)&v14[2 * v5] );
  v13 = v5 - 2;
  if ( (int)v5 - 2 >= 0 )
  {
    if ( v13 > 39 )
      v13 = 39;
    memmove(SourceString, v14, 2LL * v13);
    goto LABEL_39;
  }
LABEL_14:
  while ( 1 )
  {
    v16 = (void *)OpenCacheKeyEx(a2);
    if ( !v16 )
      break;
    Length = 52;
    v17 = Win32AllocPoolWithQuotaZInitImpl(v15, 0x34uLL, 0x72707355u);
    if ( !v17 )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( ZwQueryValueKey(v16, &DestinationString, KeyValuePartialInformation, (PVOID)v17, Length, &Length) >= 0 )
    {
      Length = *(_DWORD *)(v17 + 8);
      memmove(v31, (const void *)(v17 + 12), Length);
      GreDeleteFastMutex((char *)v17);
      ZwClose(v16);
      v18 = Length;
      goto LABEL_22;
    }
    if ( !v27 )
    {
      GreDeleteFastMutex((char *)v17);
LABEL_20:
      ZwClose(v16);
      break;
    }
    GreDeleteFastMutex((char *)v17);
    ZwClose(v16);
  }
  v18 = 0;
LABEL_22:
  if ( v11 == 40 && v18 == 40 )
  {
    v19 = (char *)this + 8;
    v20 = v33[1];
    *((_OWORD *)this + 1) = v33[0];
    v21 = v34;
    *((_OWORD *)this + 2) = v20;
    v22 = v31[0];
    *((_QWORD *)this + 6) = v21;
    v23 = v31[1];
    *(_OWORD *)((char *)this + 56) = v22;
    *(_QWORD *)&v22 = v32;
    *(_OWORD *)((char *)this + 72) = v23;
    *((_QWORD *)this + 11) = v22;
    goto LABEL_25;
  }
LABEL_23:
  v19 = (char *)this + 8;
  if ( !*((_BYTE *)this + 8) )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v25 = _mm_load_si128((const __m128i *)&_xmm);
    v32 = 29081600LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 28181LL;
    *((_QWORD *)this + 4) = 81920LL;
    *((_QWORD *)this + 5) = 252969LL;
    *((_QWORD *)this + 6) = 2621440LL;
    *(__m128i *)((char *)this + 56) = si128;
    si128.m128i_i64[0] = v32;
    *(__m128i *)((char *)this + 72) = v25;
    *((_QWORD *)this + 11) = si128.m128i_i64[0];
  }
LABEL_25:
  *v19 = 1;
}
