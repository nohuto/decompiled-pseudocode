/*
 * XREFs of _pLoadAdditinalMode @ 0x1402E3480
 * Callers:
 *     _pGetAdditionalTiming @ 0x1402E3210 (_pGetAdditionalTiming.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _pPopulateProgressiveTimingList @ 0x1402753EC (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x1402754E4 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1402E39DC (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(int a1)
{
  __int64 v1; // rdi
  ULONG v2; // r15d
  const WCHAR *v3; // rax
  NTSTATUS appended; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  NTSTATUS v8; // eax
  unsigned int *v9; // r14
  wchar_t *v10; // r13
  NTSTATUS v11; // eax
  __int64 result; // rax
  unsigned __int16 v13; // ax
  NTSTATUS v14; // eax
  unsigned int v15; // eax
  int v16; // edi
  int v17; // edi
  int v18; // edi
  _QWORD *v19; // rax
  unsigned int v20; // [rsp+38h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+68h] [rbp-9h] BYREF
  __int128 v26; // [rsp+78h] [rbp+7h]
  __int128 v27; // [rsp+88h] [rbp+17h]

  v1 = a1;
  WdLogSingleEntry1(7LL, a1);
  WdLogGlobalForLineNumber = 566;
  if ( (_DWORD)v1 == -2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 572;
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1401606D0;
  v2 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 584;
  }
  v3 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v1);
  if ( !v3 )
  {
    WdLogSingleEntry1(7LL, v1);
    result = 3221226021LL;
    WdLogGlobalForLineNumber = 594;
    return result;
  }
  appended = RtlAppendUnicodeToString(&Destination, v3);
  v5 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 603;
    }
    WdLogSingleEntry2(2LL, v1, v5);
    WdLogGlobalForLineNumber = 605;
    return (unsigned int)v5;
  }
  KeyHandle = 0LL;
  v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  LODWORD(v5) = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(7LL, v1, v6);
    WdLogGlobalForLineNumber = 620;
    return (unsigned int)v5;
  }
  v7 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    v7 = KeyHandle;
    WdLogGlobalForLineNumber = 625;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v8 = ZwQueryKey(v7, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  LODWORD(v5) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v8);
    WdLogGlobalForLineNumber = 836;
    goto LABEL_23;
  }
  if ( !DWORD1(v26) )
  {
    WdLogSingleEntry1(7LL, v1);
    WdLogGlobalForLineNumber = 829;
    LODWORD(v5) = -1073741275;
LABEL_23:
    ZwClose(KeyHandle);
    return (unsigned int)v5;
  }
  v20 = 0;
  v9 = (unsigned int *)operator new[]((unsigned int)(28 * (DWORD1(v26) - 1) + 48), 0x4D677844u, 256LL);
  if ( v9 )
  {
    v10 = (wchar_t *)operator new[](0x96uLL, 0x4D677844u, 256LL);
    if ( v10 )
    {
      while ( v2 < DWORD1(v26) )
      {
        v11 = ZwEnumerateKey(KeyHandle, v2, KeyBasicInformation, v10, 0x96u, &ResultLength);
        LODWORD(v5) = v11;
        switch ( v11 )
        {
          case -2147483643:
            goto LABEL_16;
          case -2147483622:
            WdLogSingleEntry1(3LL, v1);
            WdLogGlobalForLineNumber = 705;
            goto LABEL_20;
          case -1073741789:
LABEL_16:
            WdLogSingleEntry2(3LL, v1, v2);
            WdLogGlobalForLineNumber = 695;
            break;
          default:
            if ( v11 < 0 )
            {
              WdLogSingleEntry3(3LL, v1, v2, v11);
              WdLogGlobalForLineNumber = 717;
            }
            else
            {
              v13 = v10[6];
              Handle = 0LL;
              Destination.MaximumLength = v13;
              Destination.Length = v13;
              Destination.Buffer = v10 + 8;
              v14 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
              LODWORD(v5) = v14;
              if ( v14 >= 0 )
              {
                LODWORD(v5) = pReadDetailTimingFromReg(Handle, v1, v2, &v9[7 * v20 + 5]);
                ZwClose(Handle);
                v15 = v20 + 1;
                if ( (int)v5 < 0 )
                  v15 = v20;
                v20 = v15;
              }
              else
              {
                WdLogSingleEntry3(3LL, v1, v2, v14);
                WdLogGlobalForLineNumber = 759;
              }
            }
            break;
        }
        ++v2;
      }
LABEL_20:
      if ( v20 )
      {
        *(_QWORD *)v9 = qword_1401614C0;
        v9[2] = v1;
        v9[4] = v20;
        *((_BYTE *)v9 + 12) = 0;
        qword_1401614C0 = v9;
        if ( (_DWORD)v1 )
        {
          v16 = v1 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 != 11 )
                {
                  v19 = (_QWORD *)pPopulateProgressiveTimingList(v9);
                  if ( v19 )
                  {
                    *v19 = qword_1401614C0;
                    qword_1401614C0 = v19;
                  }
                }
              }
            }
          }
        }
        LODWORD(v5) = 0;
      }
      else
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 673;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      LODWORD(v5) = -1073741801;
    }
    goto LABEL_23;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 654;
  ZwClose(KeyHandle);
  return 3221225495LL;
}
