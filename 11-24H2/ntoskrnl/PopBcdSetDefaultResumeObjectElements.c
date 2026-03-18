/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x14049985C (CmIsStateSeparationEnabled.c)
 *     wcsrchr @ 0x140500180 (wcsrchr.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     PopBcdSetupResumeObject @ 0x140A72070 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x140A72168 (PopBcdReadElement.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(void *a1, __int64 a2, ...)
{
  wchar_t *v4; // rsi
  char *Pool2; // r14
  int v6; // ebx
  int v7; // eax
  wchar_t *v8; // rbx
  const wchar_t *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // rbx
  unsigned int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // r8
  char v21; // al
  _WORD v22[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v24; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-34h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  int ElementData; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+54h] [rbp-1Ch]
  int v30; // [rsp+58h] [rbp-18h]
  _QWORD v31[2]; // [rsp+60h] [rbp-10h] BYREF
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
  v31[0] = 0LL;
  v22[0] = 0;
  P = 0LL;
  v25 = 0;
  v4 = 0LL;
  Str = 0LL;
  Pool2 = 0LL;
  v24 = 0;
  v6 = PopBcdReadElement(a2, 285212673LL, &P, &v25);
  if ( v6 >= 0 )
  {
    v6 = PopBcdReadElement(a2, 301989890LL, &Str, &v24);
    if ( v6 < 0 )
    {
      v4 = Str;
    }
    else
    {
      v24 = 8;
      ElementData = BcdGetElementData(a2, 0x15000052u, (__int64)v31, &v24);
      v23 = 2;
      v29 = BcdGetElementData(a2, 0x16000054u, (__int64)va, &v23);
      v23 = 2;
      v7 = BcdGetElementData(a2, 0x16000046u, (__int64)v22, &v23);
      v4 = Str;
      v30 = v7;
      v8 = wcsrchr(Str, 0x5Cu);
      if ( v8 )
      {
        v9 = L"winresume.efi";
        if ( dword_140EFEAF0 != 2 )
          v9 = L"winresume.exe";
        v10 = -1LL;
        v11 = ((char *)v8 - (char *)v4 + 2) >> 1;
        v12 = -1LL;
        do
          ++v12;
        while ( v9[v12] );
        LODWORD(Str) = 2 * (v11 + v12) + 2;
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v13 = 2LL * (unsigned int)v11;
          memmove(Pool2, v4, v13);
          do
            ++v10;
          while ( v9[v10] );
          memmove(&Pool2[v13], v9, 2 * v10 + 2);
          v14 = v25;
          v6 = BcdSetElementDataWithFlags(a1, 285212673LL, v15, (__int64)P, v25);
          if ( v6 >= 0 )
          {
            if ( !CmIsStateSeparationEnabled()
              || (v6 = BcdSetElementDataWithFlags(a1, 553648133LL, v16, (__int64)P, v14), v6 >= 0) )
            {
              v6 = BcdSetElementDataWithFlags(a1, 301989890LL, v16, (__int64)Pool2, (unsigned int)Str);
              if ( v6 >= 0 )
              {
                if ( ElementData >= 0 )
                  BcdSetElementDataWithFlags(a1, 352321618LL, v17, (__int64)v31, v24);
                v18 = v23;
                if ( v29 >= 0 )
                  BcdSetElementDataWithFlags(a1, 369098836LL, v17, (__int64)va, v23);
                if ( v30 >= 0 )
                  BcdSetElementDataWithFlags(a1, 369098822LL, v17, (__int64)v22, v18);
                v6 = PopBcdSetupResumeObject(a1);
                if ( v6 >= 0 )
                {
                  v21 = v34;
                  if ( (_BYTE)KdDebuggerEnabled )
                    v21 = 1;
                  LOBYTE(v34) = v21;
                  v6 = BcdSetElementDataWithFlags(a1, 637534214LL, v19, (__int64)va1, 2u);
                  if ( v6 >= 0 )
                    v6 = 0;
                }
              }
            }
          }
        }
        else
        {
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v6;
}
