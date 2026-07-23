/*
 * XREFs of PiGetDeviceRegProperty @ 0x1408BA9AC
 * Callers:
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlFormatMessageEx @ 0x140A685FC (RtlFormatMessageEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(int a1, __int64 a2, int a3, int a4, void *a5, PULONG ReturnLength)
{
  wchar_t *v9; // r13
  int DeviceRegProp; // eax
  unsigned int v11; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rdi
  ULONG v14; // r15d
  wchar_t *v15; // rsi
  char v16; // cl
  _WORD *v18; // rsi
  wchar_t *v19; // rcx
  int v20; // edx
  __int16 v21; // ax
  wchar_t *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  va_list v25; // r13
  wchar_t *v26; // rcx
  unsigned int i; // r13d
  wchar_t *v28; // rax
  va_list v29; // rax
  __int64 v30; // rcx
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+68h] [rbp-98h]
  va_list Arguments; // [rsp+70h] [rbp-90h] BYREF
  char v35[152]; // [rsp+78h] [rbp-88h] BYREF

  Src = a5;
  Size = *ReturnLength;
  v9 = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&Size + 4, (__int64)a5, (__int64)&Size, 0);
  v11 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp >= 0 )
    {
      if ( HIDWORD(Size) != 1 )
        return (unsigned int)-1073741584;
    }
    else if ( DeviceRegProp != -1073741789 )
    {
      return v11;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x6F697050u);
    v13 = Pool2;
    if ( Pool2 )
    {
      if ( v11 != -1073741789 )
      {
        memmove(Pool2, Src, (unsigned int)Size);
        goto LABEL_12;
      }
      v23 = CmGetDeviceRegProp(PiPnpRtlCtx, a1, 0, a4, (__int64)&Size + 4, (__int64)Pool2, (__int64)&Size, 0);
      v11 = v23;
      if ( v23 < 0 )
      {
        if ( v23 == -1073741789 )
          *ReturnLength = Size;
      }
      else
      {
        if ( HIDWORD(Size) == 1 )
        {
LABEL_12:
          v14 = Size;
          if ( (unsigned int)Size > 2 && *v13 == 64 )
          {
            v18 = v13 + 1;
            v19 = v13 + 2;
            v20 = 0;
            while ( v19 < &v13[(unsigned __int64)(unsigned int)Size >> 1] )
            {
              v21 = *v18;
              if ( !*v18 )
                break;
              if ( v21 == 44 )
              {
                if ( ((*v19 - 35) & 0xFFF5) != 0 || *v19 == 43 )
                  break;
                v20 = 1;
              }
              else if ( v21 == 59 )
              {
                if ( !v20 )
                  break;
                v15 = v18 + 1;
                v14 = (_DWORD)v13 - (_DWORD)v15 + Size;
                v22 = wcsstr(v15, L";(");
                v9 = v22;
                if ( v22 )
                {
                  v24 = (v14 >> 1) - 2;
                  if ( v15[v24] == 41 )
                  {
                    *v22 = 0;
                    v25 = (va_list)(v22 + 2);
                    v15[v24] = 0;
                    Str = v22 + 2;
                    memset_0(v35, 0, sizeof(v35));
                    v26 = Str;
                    Arguments = v25;
                    for ( i = 1; ; ++i )
                    {
                      v28 = wcschr(v26, 0x2Cu);
                      if ( !v28 )
                        break;
                      *v28 = 0;
                      v29 = (va_list)(v28 + 1);
                      if ( i >= 0x13 )
                      {
                        v9 = Str;
                        v16 = 1;
                        goto LABEL_15;
                      }
                      v30 = i;
                      *(_QWORD *)&v35[8 * v30 - 8] = v29;
                      v26 = (wchar_t *)v29;
                    }
                    v9 = Str;
                  }
                }
                v16 = 0;
                goto LABEL_15;
              }
              ++v18;
              ++v19;
            }
          }
          v15 = v13;
          v16 = 0;
LABEL_15:
          if ( *ReturnLength < v14 )
          {
            v11 = -1073741789;
          }
          else if ( v9 )
          {
            if ( v16 )
              v11 = -1073741619;
            else
              v11 = RtlFormatMessageEx(v15, 0, 0, 0, 1u, &Arguments, (PWSTR)Src, *ReturnLength, ReturnLength, 0LL);
          }
          else
          {
            memmove(Src, v15, v14);
          }
          *ReturnLength = v14;
          goto LABEL_19;
        }
        v11 = -1073741584;
      }
    }
    else
    {
      v11 = -1073741670;
    }
LABEL_19:
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    return v11;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( HIDWORD(Size) == a3 )
      goto LABEL_4;
    return (unsigned int)-1073741584;
  }
  if ( DeviceRegProp == -1073741789 )
LABEL_4:
    *ReturnLength = Size;
  return v11;
}
