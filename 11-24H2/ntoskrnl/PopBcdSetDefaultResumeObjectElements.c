/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     PopBcdSetupResumeObject @ 0x140A6B450 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x140A6B548 (PopBcdReadElement.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(HANDLE BcdObjectHandle, HANDLE a2, ...)
{
  wchar_t *v4; // rsi
  char *Pool2; // r14
  NTSTATUS Element; // ebx
  NTSTATUS v7; // eax
  wchar_t *v8; // rbx
  const wchar_t *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // rbx
  ULONG v14; // r15d
  BCD_FLAGS v15; // r8d
  BCD_FLAGS v16; // r8d
  BCD_FLAGS v17; // r8d
  ULONG v18; // ebx
  BCD_FLAGS v19; // r8d
  char v21; // al
  _WORD v22[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG v23; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG BufferSize; // [rsp+38h] [rbp-38h] BYREF
  ULONG v25; // [rsp+3Ch] [rbp-34h]
  wchar_t *Str; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+48h] [rbp-28h]
  NTSTATUS ElementData; // [rsp+50h] [rbp-20h]
  NTSTATUS v29; // [rsp+54h] [rbp-1Ch]
  int v30; // [rsp+58h] [rbp-18h]
  _QWORD Buffer[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  LOWORD(v34) = 0;
  LOWORD(v32) = 0;
  Buffer[0] = 0LL;
  v22[0] = 0;
  P = 0LL;
  v25 = 0;
  v4 = 0LL;
  Str = 0LL;
  Pool2 = 0LL;
  BufferSize = 0;
  Element = PopBcdReadElement(a2, 0x11000001u);
  if ( Element >= 0 )
  {
    Element = PopBcdReadElement(a2, 0x12000002u);
    if ( Element < 0 )
    {
      v4 = Str;
    }
    else
    {
      BufferSize = 8;
      ElementData = BcdGetElementData(a2, 0x15000052u, Buffer, &BufferSize);
      v23 = 2;
      v29 = BcdGetElementData(a2, 0x16000054u, va, &v23);
      v23 = 2;
      v7 = BcdGetElementData(a2, 0x16000046u, v22, &v23);
      v4 = Str;
      v30 = v7;
      v8 = wcsrchr(Str, 0x5Cu);
      if ( v8 )
      {
        v9 = L"winresume.efi";
        if ( dword_140EFEE10 != 2 )
          v9 = L"winresume.exe";
        v10 = -1LL;
        v11 = ((char *)v8 - (char *)v4 + 2) >> 1;
        v12 = -1LL;
        do
          ++v12;
        while ( v9[v12] );
        LODWORD(Str) = 2 * (v11 + v12) + 2;
        Pool2 = (char *)ExAllocatePool2(0x100uLL, (unsigned int)Str, 0x64634250u);
        if ( Pool2 )
        {
          v13 = 2LL * (unsigned int)v11;
          memmove(Pool2, v4, v13);
          do
            ++v10;
          while ( v9[v10] );
          memmove(&Pool2[v13], v9, 2 * v10 + 2);
          v14 = v25;
          Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x11000001u, v15, P, v25);
          if ( Element >= 0 )
          {
            if ( !CmIsStateSeparationEnabled()
              || (Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000005u, v16, P, v14), Element >= 0) )
            {
              Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000002u, v16, Pool2, (ULONG)Str);
              if ( Element >= 0 )
              {
                if ( ElementData >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x15000052u, v17, Buffer, BufferSize);
                v18 = v23;
                if ( v29 >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000054u, v17, va, v23);
                if ( v30 >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000046u, v17, v22, v18);
                Element = PopBcdSetupResumeObject(BcdObjectHandle);
                if ( Element >= 0 )
                {
                  v21 = v34;
                  if ( (_BYTE)KdDebuggerEnabled )
                    v21 = 1;
                  LOBYTE(v34) = v21;
                  Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x26000006u, v19, va1, 2u);
                  if ( Element >= 0 )
                    Element = 0;
                }
              }
            }
          }
        }
        else
        {
          Element = -1073741670;
        }
      }
      else
      {
        Element = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Element;
}
