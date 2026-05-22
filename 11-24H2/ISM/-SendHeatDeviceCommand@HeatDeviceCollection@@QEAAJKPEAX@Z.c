/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18006BF90
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006BE10 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(HeatDeviceCollection *this, int a2, _QWORD *a3)
{
  __int64 i; // rcx
  __int64 v7; // rdx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-60h]
  unsigned int v17; // [rsp+40h] [rbp-40h]
  _OWORD v18[3]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  int v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = 0;
  if ( a3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x100 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
          (const char *)0x80070490LL,
          v16);
        return 2147943568LL;
      }
      v7 = *((_QWORD *)this + i + 78);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == a2 )
          break;
      }
    }
    switch ( *(_DWORD *)a3 )
    {
      case 1:
        if ( *((_DWORD *)a3 + 2) == 1 )
        {
          v8 = NtRIMDeviceIoControl(
                 *((_QWORD *)this + 10),
                 *(_QWORD *)(v7 + 16),
                 *((unsigned int *)a3 + 4),
                 a3[3],
                 *((_DWORD *)a3 + 8),
                 a3[5],
                 *((_DWORD *)a3 + 12),
                 &v20,
                 (*(_DWORD *)a3 - 1) & v17);
          v9 = (_DWORD *)a3[7];
          v10 = v8;
          if ( v9 )
            *v9 = v20;
          goto LABEL_10;
        }
        v12 = 233LL;
        break;
      case 2:
        v15 = *(_QWORD *)(v7 + 16);
        v10 = 0;
        *(_QWORD *)a3[1] = v15;
LABEL_10:
        *((_DWORD *)a3 + 16) = v10;
        return 0LL;
      case 3:
        v14 = *((_QWORD *)this + 10);
        memset(v18, 0, 40);
        v10 = RIMGetDeviceProperties(v14, *(_QWORD *)(v7 + 16), v18);
        if ( v10 >= 0 )
        {
          *(_QWORD *)a3[1] = *(_QWORD *)&v18[1];
          *(_DWORD *)(a3[1] + 8LL) = DWORD2(v18[1]);
        }
        goto LABEL_10;
      case 4:
        v13 = *((_QWORD *)this + 10);
        *((_QWORD *)&v18[0] + 1) = *((unsigned int *)a3 + 4);
        *(_QWORD *)&v18[1] = a3[1];
        *(_OWORD *)((char *)&v18[1] + 8) = 0LL;
        *(_QWORD *)&v18[0] = 4LL;
        v10 = RIMGetDeviceProperties(v13, *(_QWORD *)(v7 + 16), v18);
        if ( v10 >= 0 )
          *((_DWORD *)a3 + 4) = DWORD2(v18[0]);
        goto LABEL_10;
      default:
        v12 = 289LL;
        break;
    }
  }
  else
  {
    v12 = 191LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
    (const char *)0x80070057LL,
    v16);
  return 2147942487LL;
}
