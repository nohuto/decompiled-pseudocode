/*
 * XREFs of UsbhEtwLogPortInformation @ 0x14002F654
 * Callers:
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 *     UsbhGetExtendedHubInformation @ 0x14003BB6C (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

_DWORD *__fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // r14
  unsigned __int16 v4; // bx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // r8
  _DWORD *v13; // rdx
  __int64 v14; // r9
  unsigned __int16 *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  _DWORD *v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // r9
  unsigned __int16 *v23; // rcx
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rsi
  _DWORD *v27; // r8
  _DWORD *v28; // rdx
  __int64 v29; // r9
  unsigned __int16 *v30; // rcx
  int v31; // eax
  __int64 v32; // [rsp+50h] [rbp-B8h]
  int v33; // [rsp+70h] [rbp-98h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h] BYREF
  _TBYTE v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+A0h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  int v42; // [rsp+C0h] [rbp-48h]
  _OWORD v43[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v44; // [rsp+E8h] [rbp-20h]
  _OWORD v45[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v46; // [rsp+110h] [rbp+8h]
  _OWORD v47[2]; // [rsp+118h] [rbp+10h] BYREF
  int v48; // [rsp+138h] [rbp+30h]

  result = 0LL;
  v36 = 0.0;
  if ( dword_14006F6D0 )
  {
    v3 = FdoExt(a1);
    v4 = 1;
    v5 = *((_QWORD *)v3 + 377);
    result = FdoExt(a1);
    if ( *((_BYTE *)result + 2938) )
    {
      do
      {
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v6 = *(_QWORD *)(a1 + 64);
            if ( v6 )
            {
              v7 = *(_QWORD *)(v6 + 888)
                 + 32LL
                 * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
              *(_DWORD *)v7 = 1413771367;
              *(_QWORD *)(v7 + 16) = v4;
              *(_QWORD *)(v7 + 8) = 0LL;
              *(_QWORD *)(v7 + 24) = 0LL;
            }
          }
        }
        if ( v4 )
        {
          v8 = FdoExt(a1);
          if ( v4 <= *((unsigned __int8 *)FdoExt(a1) + 2938) )
          {
            v9 = *((_QWORD *)v8 + 382);
            if ( v9 )
            {
              if ( (UsbhLogMask & 8) != 0 )
              {
                if ( a1 )
                {
                  v10 = *(_QWORD *)(a1 + 64);
                  if ( v10 )
                  {
                    v11 = *(_QWORD *)(v10 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
                    *(_DWORD *)v11 = 1044672615;
                    *(_QWORD *)(v11 + 8) = 0LL;
                    *(_QWORD *)(v11 + 16) = v4;
                    *(_QWORD *)(v11 + 24) = v9 + 2928LL * v4 - 2928;
                  }
                }
              }
            }
          }
        }
        v33 = v4;
        v37 = 0LL;
        v38 = 0;
        memset(v43, 0, sizeof(v43));
        v44 = 0;
        if ( dword_14006F6D0 )
        {
          v12 = FdoExt(a1);
          v13 = (_DWORD *)v43 + 3;
          v14 = 5LL;
          LODWORD(v37) = v12[1298];
          WORD2(v37) = *((_WORD *)v12 + 2598);
          HIWORD(v37) = v12[1300];
          v38 = v12[1307];
          *(_QWORD *)&v43[0] = (unsigned int)v12[637];
          v15 = (unsigned __int16 *)v12 + 2605;
          DWORD2(v43[0]) = *((unsigned __int16 *)v12 + 2604);
          DWORD1(v43[0]) = *((_WORD *)v12 + 2604) != 0;
          do
          {
            v16 = *v15;
            *v13 = v16;
            if ( v16 )
              ++DWORD1(v43[0]);
            ++v13;
            ++v15;
            --v14;
          }
          while ( v14 );
          LODWORD(v32) = 4;
          v44 = v12[634];
          UsbhEtwWrite(
            &USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES,
            0LL,
            &v37,
            12LL,
            v43,
            36LL,
            &v33,
            4LL,
            v5 + 4LL * v4,
            v32,
            0LL);
        }
        v17 = *((_QWORD *)v3 + 378);
        if ( v17 )
        {
          if ( (*(_DWORD *)(v5 + 4LL * v4) & 0x20) != 0 )
          {
            v18 = 28LL * v4;
            memset(v45, 0, sizeof(v45));
            LOBYTE(v36) = *(_BYTE *)(v18 + v17);
            BYTE1(v36) = *(_BYTE *)(v18 + *((_QWORD *)v3 + 378) + 1);
            *(_DWORD *)((char *)&v36 + 2) = *(_DWORD *)(v18 + *((_QWORD *)v3 + 378) + 4);
            v19 = *(_DWORD *)(v18 + *((_QWORD *)v3 + 378) + 8);
            v34 = v4;
            *(_DWORD *)((char *)&v36 + 6) = v19;
            v39 = 0LL;
            v40 = 0;
            v46 = 0;
            if ( dword_14006F6D0 )
            {
              v20 = FdoExt(a1);
              v21 = (_DWORD *)v45 + 3;
              v22 = 5LL;
              LODWORD(v39) = v20[1298];
              WORD2(v39) = *((_WORD *)v20 + 2598);
              HIWORD(v39) = v20[1300];
              v40 = v20[1307];
              *(_QWORD *)&v45[0] = (unsigned int)v20[637];
              v23 = (unsigned __int16 *)v20 + 2605;
              DWORD2(v45[0]) = *((unsigned __int16 *)v20 + 2604);
              DWORD1(v45[0]) = *((_WORD *)v20 + 2604) != 0;
              do
              {
                v24 = *v23;
                *v21 = v24;
                if ( v24 )
                  ++DWORD1(v45[0]);
                ++v21;
                ++v23;
                --v22;
              }
              while ( v22 );
              LODWORD(v32) = 10;
              v46 = v20[634];
              UsbhEtwWrite(
                &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE,
                0LL,
                &v39,
                12LL,
                v45,
                36LL,
                &v34,
                4LL,
                &v36,
                v32,
                0LL);
            }
          }
          if ( (*(_DWORD *)(v5 + 4LL * v4) & 0x40) != 0 )
          {
            v25 = *((_QWORD *)v3 + 378) + 12LL;
            memset(v47, 0, sizeof(v47));
            v35 = v4;
            v26 = 28LL * v4 + v25;
            v41 = 0LL;
            v42 = 0;
            v48 = 0;
            if ( dword_14006F6D0 )
            {
              v27 = FdoExt(a1);
              v28 = (_DWORD *)v47 + 3;
              v29 = 5LL;
              LODWORD(v41) = v27[1298];
              WORD2(v41) = *((_WORD *)v27 + 2598);
              HIWORD(v41) = v27[1300];
              v42 = v27[1307];
              *(_QWORD *)&v47[0] = (unsigned int)v27[637];
              v30 = (unsigned __int16 *)v27 + 2605;
              DWORD2(v47[0]) = *((unsigned __int16 *)v27 + 2604);
              DWORD1(v47[0]) = *((_WORD *)v27 + 2604) != 0;
              do
              {
                v31 = *v30;
                *v28 = v31;
                if ( v31 )
                  ++DWORD1(v47[0]);
                ++v28;
                ++v30;
                --v29;
              }
              while ( v29 );
              LODWORD(v32) = 16;
              v48 = v27[634];
              UsbhEtwWrite(
                &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
                0LL,
                &v41,
                12LL,
                v47,
                36LL,
                &v35,
                4LL,
                v26,
                v32,
                0LL);
            }
          }
        }
        ++v4;
        result = FdoExt(a1);
      }
      while ( v4 <= *((unsigned __int8 *)result + 2938) );
    }
  }
  return result;
}
