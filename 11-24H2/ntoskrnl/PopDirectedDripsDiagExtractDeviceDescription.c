/*
 * XREFs of PopDirectedDripsDiagExtractDeviceDescription @ 0x140763D28
 * Callers:
 *     PopDirectedDripsDiagRundownDevices @ 0x140A62D68 (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     <none>
 */

UNICODE_STRING **__fastcall PopDirectedDripsDiagExtractDeviceDescription(
        UNICODE_STRING *a1,
        UNICODE_STRING **a2,
        UNICODE_STRING **a3,
        UNICODE_STRING **a4,
        UNICODE_STRING **a5,
        UNICODE_STRING **a6,
        UNICODE_STRING **a7)
{
  UNICODE_STRING *v7; // r10
  UNICODE_STRING *v8; // rax
  UNICODE_STRING *v9; // rax
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdx
  UNICODE_STRING *v12; // rdx
  UNICODE_STRING **result; // rax

  v7 = &PopDirectedDripsDiagEmptyString;
  v8 = &PopDirectedDripsDiagEmptyString;
  if ( a1[3].Buffer )
    v8 = a1 + 3;
  *a2 = v8;
  v9 = &PopDirectedDripsDiagEmptyString;
  if ( a1[4].Buffer )
    v9 = a1 + 4;
  *a3 = v9;
  v10 = &PopDirectedDripsDiagEmptyString;
  if ( a1[5].Buffer )
    v10 = a1 + 5;
  *a4 = v10;
  v11 = &PopDirectedDripsDiagEmptyString;
  if ( a1[6].Buffer )
    v11 = a1 + 6;
  *a5 = v11;
  v12 = &PopDirectedDripsDiagEmptyString;
  if ( a1[7].Buffer )
    v12 = a1 + 7;
  *a6 = v12;
  if ( a1[8].Buffer )
    v7 = a1 + 8;
  result = a7;
  *a7 = v7;
  return result;
}
