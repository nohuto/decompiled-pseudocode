/*
 * XREFs of _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x1800317DC
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180036840 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180045978 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18007CA5C (_lambda_2d57628cd8490ef0d12835f9ba011710_--operator().c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180125DB8 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02__.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

char __fastcall lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(__int64 *a1, const struct tWAVEFORMATEX *a2)
{
  __int64 v2; // rax
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  GUID v8; // xmm0
  __int64 v9; // r10
  __int64 v10; // r10
  int v11; // edx
  char v12; // si
  _QWORD *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  _QWORD *v17; // rcx
  __int64 v18; // rax
  const struct tWAVEFORMATEX ***v19; // rdi
  const struct tWAVEFORMATEX ***v20; // r14
  int i; // eax
  _QWORD *v23; // r8
  __int64 v24; // rdx
  __int128 v25; // [rsp+20h] [rbp-20h]

  v2 = *a1;
  v5 = *((_DWORD *)a1 + 2) == 3;
  v6 = *(_QWORD *)(*a1 + 1888);
  if ( !v5 )
  {
    if ( v6 )
    {
      v7 = *(_QWORD *)(v2 + 1896);
      goto LABEL_4;
    }
LABEL_38:
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x1800319A1LL);
  }
  if ( v6 <= 3 )
    goto LABEL_38;
  v7 = *(_QWORD *)(v2 + 1896) + 72LL;
LABEL_4:
  v8 = *(GUID *)((char *)a1 + 12);
  v9 = 296LL;
  if ( *((_DWORD *)a1 + 2) != 3 )
    v9 = 272LL;
  v10 = *(_QWORD *)(v2 + 1584) + v9;
  v11 = 0;
  v25 = *(_OWORD *)((char *)a1 + 12);
  v12 = 1;
  while ( v11 < *(_DWORD *)(v7 + 16) )
  {
    v13 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v11);
    v14 = *v13 - v25;
    if ( *v13 == (_QWORD)v25 )
      v14 = v13[1] - *((_QWORD *)&v25 + 1);
    if ( !v14 )
    {
      if ( v11 != -1 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v7 + 16) )
            goto LABEL_36;
          v23 = (_QWORD *)(*(_QWORD *)v7 + 16LL * i);
          v24 = *v23 - *(_QWORD *)&v8.Data1;
          if ( *v23 == *(_QWORD *)&v8.Data1 )
            v24 = v23[1] - *(_QWORD *)v8.Data4;
          if ( !v24 )
            break;
        }
        if ( i == -1 )
        {
LABEL_36:
          v8 = GUID_00000000_0000_0000_0000_000000000000;
          break;
        }
        if ( i < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, 0);
          __debugbreak();
        }
        v8 = *(GUID *)(*(_QWORD *)(v7 + 8) + 16LL * i);
      }
      break;
    }
    ++v11;
  }
  v15 = *(_QWORD **)v10;
  v16 = *(_QWORD **)(v10 + 8);
  while ( v15 != v16 )
  {
    v17 = (_QWORD *)*v15;
    v18 = *(_QWORD *)*v15 - *(_QWORD *)&v8.Data1;
    if ( !v18 )
      v18 = v17[1] - *(_QWORD *)v8.Data4;
    if ( !v18 )
    {
      v19 = (const struct tWAVEFORMATEX ***)v17[2];
      v20 = (const struct tWAVEFORMATEX ***)v17[3];
      while ( v19 != v20 )
      {
        if ( (unsigned int)CompareWaveFormat(a2, **v19) )
          return v12;
        ++v19;
      }
    }
    ++v15;
  }
  return 0;
}
