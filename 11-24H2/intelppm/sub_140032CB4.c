/*
 * XREFs of sub_140032CB4 @ 0x140032CB4
 * Callers:
 *     sub_140032AE0 @ 0x140032AE0 (sub_140032AE0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140033E48 @ 0x140033E48 (sub_140033E48.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 */

__int64 __fastcall sub_140032CB4(__int64 a1, PVOID *a2)
{
  __int64 v3; // rsi
  int v4; // r9d
  unsigned int v5; // ebx
  unsigned int *v6; // rbx
  _QWORD v8[3]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v9; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v10)(); // [rsp+68h] [rbp-51h]
  __int64 v11; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v12)(); // [rsp+80h] [rbp-39h]
  __int64 v13; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v14)(); // [rsp+98h] [rbp-21h]
  __int64 v15; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v16)(); // [rsp+B0h] [rbp-9h]
  __int64 v17; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v18)(); // [rsp+C8h] [rbp+Fh]
  __int64 v19; // [rsp+D0h] [rbp+17h]
  __int64 (__fastcall *v20)(); // [rsp+E0h] [rbp+27h]

  v12 = sub_140045480;
  v14 = sub_140045480;
  v10 = sub_140033AC0;
  v8[1] = "ControlledResources";
  v16 = sub_140033AC0;
  v18 = sub_140045480;
  v8[2] = sub_140033B80;
  v3 = 4LL;
  v20 = sub_140045480;
  v4 = *(unsigned __int16 *)(a1 + 2);
  LOBYTE(v8[0]) = 0;
  *(_DWORD *)((char *)v8 + 2) = 3;
  LOBYTE(v9) = 1;
  *(_DWORD *)((char *)&v9 + 2) = 0x80000;
  LOBYTE(v11) = 1;
  *(_DWORD *)((char *)&v11 + 2) = 524290;
  LOBYTE(v13) = 2;
  *(_DWORD *)((char *)&v13 + 2) = 2097154;
  LOBYTE(v15) = 3;
  *(_DWORD *)((char *)&v15 + 2) = 3670016;
  LOBYTE(v17) = 3;
  *(_DWORD *)((char *)&v17 + 2) = 3670018;
  LOBYTE(v19) = 4;
  *(_DWORD *)((char *)&v19 + 2) = 5242882;
  if ( (int)sub_14003F9A0(
              (unsigned int)v8,
              7,
              (int)a1 + 4,
              v4,
              (__int64)a2,
              104,
              (__int64)"_CPC.ResourcePriorityRegisters[]",
              1,
              v8[0],
              "ControlledResources",
              sub_140033B80,
              v9,
              "EnableValue",
              sub_140033AC0,
              v11,
              "EnableValue",
              sub_140045480,
              v13,
              "Enable",
              sub_140045480,
              v15,
              "PriorityCount",
              sub_140033AC0,
              v17,
              "PriorityCount",
              sub_140045480,
              v19,
              "Priority",
              sub_140045480) >= 0 )
  {
    v6 = (unsigned int *)&unk_140012340;
    do
    {
      sub_140033E48((char *)a2 + *v6);
      v6 += 6;
      --v3;
    }
    while ( v3 );
    return 0;
  }
  else
  {
    v5 = -1072431089;
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0x72637250u);
      *a2 = 0LL;
    }
  }
  return v5;
}
