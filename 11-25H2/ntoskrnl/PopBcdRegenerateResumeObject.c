/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x140753CD0
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140A25794 (PopBcdReadElement.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(void *a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  NTSTATUS Element; // ebx
  HANDLE v7; // rdi
  BCD_FLAGS v8; // r8d
  NTSTATUS v9; // eax
  BCD_FLAGS v10; // r8d
  BCD_FLAGS v11; // r8d
  BCD_FLAGS v12; // r8d
  BCD_FLAGS v13; // r8d
  HANDLE BcdObjectHandle; // [rsp+50h] [rbp-9h] BYREF
  PVOID v16; // [rsp+58h] [rbp-1h]
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+60h] [rbp+7h] BYREF
  GUID v18; // [rsp+68h] [rbp+Fh] BYREF
  GUID Identifier; // [rsp+78h] [rbp+1Fh] BYREF

  v3 = 0LL;
  BcdObjectHandle = 0LL;
  v16 = 0LL;
  Description.Version = 1;
  Identifier = 0LL;
  Description.Type = 270532612;
  v18 = 0LL;
  Element = BcdCreateObject(a1, 0LL, &Description, &BcdObjectHandle);
  if ( Element < 0 )
  {
    v7 = BcdObjectHandle;
  }
  else
  {
    Element = PopBcdReadElement(a2, 0x12000004u);
    if ( Element < 0 )
    {
      v7 = BcdObjectHandle;
    }
    else
    {
      PopBcdReadElement(a2, 0x12000005u);
      v7 = BcdObjectHandle;
      v9 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000004u, v8, 0LL, 0);
      v3 = v16;
      Element = v9;
      if ( v9 >= 0 )
      {
        if ( !v16 || (Element = BcdSetElementDataWithFlags(v7, 0x12000005u, v10, v16, 0), Element >= 0) )
        {
          Element = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( Element >= 0 )
          {
            v18 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            Element = BcdSetElementDataWithFlags(v7, 0x14000006u, v11, &v18, 0x10u);
            if ( Element >= 0 )
            {
              if ( (int)PopBcdReadElement(a2, 0x17000077u) < 0
                || (Element = BcdSetElementDataWithFlags(v7, 0x17000077u, v12, 0LL, 0), Element >= 0) )
              {
                Element = BcdQueryObject(v7, 0, 0LL, &Identifier);
                if ( Element >= 0 )
                {
                  Element = BcdSetElementDataWithFlags(a2, 0x23000003u, v13, &Identifier, 0x10u);
                  if ( Element >= 0 )
                  {
                    *a3 = v7;
                    v7 = 0LL;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( Element < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)Element;
}
