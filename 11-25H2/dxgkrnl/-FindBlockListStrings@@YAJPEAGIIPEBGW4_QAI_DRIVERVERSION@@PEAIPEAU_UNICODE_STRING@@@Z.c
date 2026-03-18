/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1402319DC
 * Callers:
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402313EC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402315F0 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@34@Z @ 0x140004500 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@343@Z @ 0x140004608 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkRetrieveStringFromRegistry @ 0x140231260 (DxgkRetrieveStringFromRegistry.c)
 *     ?CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z @ 0x140231720 (-CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x140231E30 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  NTSTATUS v8; // edi
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rsi
  ULONG v12; // r14d
  ULONG v13; // eax
  struct _UNICODE_STRING *v14; // rbx
  unsigned __int16 *v15; // r9
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  struct _UNICODE_STRING *v19; // rdx
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  int v22; // r11d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // r10
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v32; // [rsp+51h] [rbp-AFh]
  unsigned int v33; // [rsp+54h] [rbp-ACh]
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  enum _QAI_DRIVERVERSION v35; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A0h] BYREF
  enum _QAI_DRIVERVERSION v37; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING *v39; // [rsp+70h] [rbp-90h]
  void *KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+90h] [rbp-70h] BYREF
  ULONG v43; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 *v44; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v45; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD KeyInformation[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v50; // [rsp+118h] [rbp+18h]

  v34 = a2;
  v44 = a4;
  v33 = a3;
  v39 = a7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v50 = 0LL;
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v8 >= 0 )
  {
    if ( (_DWORD)v50 )
    {
      v10 = DWORD1(v50) + 18;
      v11 = operator new[]((unsigned int)(DWORD1(v50) + 18), 0x4B677844u, 256LL, v9);
      if ( v11 )
      {
        v12 = 0;
        if ( (_DWORD)v50 )
        {
          v13 = v10 - 2;
          v14 = v39;
          v43 = v13;
          do
          {
            v8 = ZwEnumerateValueKey(KeyHandle, v12, KeyValueBasicInformation, (PVOID)v11, v13, &ResultLength);
            if ( v8 >= 0 && *(_DWORD *)(v11 + 4) == 7 )
            {
              v15 = v44;
              v16 = v33;
              v17 = v34;
              v18 = (unsigned __int64)*(unsigned int *)(v11 + 8) >> 1;
              v31 = 0;
              *(_WORD *)(v11 + 2 * v18 + 12) = 0;
              v8 = ParseAndCompareBlockListCondition((const unsigned __int16 *)(v11 + 12), v17, v16, v15, a5, &v31);
              if ( v8 >= 0 )
              {
                if ( v31 )
                {
                  ValueName = 0LL;
                  RtlInitUnicodeString(&ValueName, (PCWSTR)(v11 + 12));
                  if ( *a6 < 0x14 )
                  {
                    v8 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName, (__int64)&v14[*a6]);
                    if ( v8 >= 0 )
                    {
                      v19 = v39;
                      v39[*a6].Buffer[((unsigned __int64)v39[*a6].Length >> 1) - 1] = 0;
                      v20 = *a6;
                      v41 = v19[*a6];
                      v32 = CompareMultiString((char *)L"GPU_P_ALL", &v41);
                      v41 = v39[v20];
                      v31 = CompareMultiString((char *)L"GPU_PV_ALL", &v41);
                      v41 = v39[v20];
                      v21 = CompareMultiString((char *)L"GPU_PV_HIGH_SECURITY", &v41);
                      LOBYTE(v22) = 0;
                      if ( (v31 || v21)
                        && (unsigned int)dword_14015B660 > 5
                        && tlgKeywordOn((__int64)&dword_14015B660, 0x400000000200LL) )
                      {
                        if ( !(_BYTE)v25 || (v27 = 1, v26) )
                          v27 = v22;
                        v42 = v27;
                        *(_QWORD *)&v41.Length = v44;
                        v36 = v33;
                        v37 = v34;
                        v45 = (unsigned __int16 *)(v11 + 12);
                        v35 = a5;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                          v23,
                          (__int64)&unk_14013BD16,
                          v24,
                          v25,
                          (__int64)&v37,
                          (__int64)&v36,
                          (void **)&v41,
                          (__int64)&v35,
                          (void **)&v45,
                          (__int64)&v42);
                        LOBYTE(v22) = 0;
                      }
                      if ( v32 != (_BYTE)v22 && (unsigned int)dword_14015B660 > 5 )
                      {
                        if ( tlgKeywordOn((__int64)&dword_14015B660, 0x400000001000LL) )
                        {
                          v45 = v44;
                          v36 = v33;
                          v35 = v34;
                          *(_QWORD *)&v41.Length = v11 + 12;
                          v37 = a5;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                            v28,
                            (__int64)&unk_14013BCB2,
                            v29,
                            v30,
                            (__int64)&v35,
                            (__int64)&v36,
                            (void **)&v45,
                            (__int64)&v37,
                            (void **)&v41);
                        }
                      }
                      ++*a6;
                      v14 = v39;
                    }
                  }
                }
              }
            }
            v13 = v43;
            ++v12;
          }
          while ( v12 < (unsigned int)v50 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v11);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v8;
}
