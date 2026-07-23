/*
 * XREFs of DrvDbDeleteObjectRegKey @ 0x140821B90
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1409254C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x140925E40 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140AABA10 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140927308 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140928938 (DrvDbGetObjectDatabaseNode.c)
 */

__int64 __fastcall DrvDbDeleteObjectRegKey(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // edi
  char v7; // r13
  int ObjectDatabaseNode; // eax
  __int64 v9; // r8
  _QWORD *v10; // r15
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD *v13; // r14
  int v14; // eax
  int v15; // edi
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+58h]

  v22 = a4;
  v21 = a3;
  v18 = 0LL;
  v5 = a2;
  v19 = 0LL;
  v7 = 0;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, a3, &v21, &v19);
  v10 = v19;
  v11 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v19 )
    {
      v12 = DrvDbAcquireDatabaseNodeBaseKey(a1, v19, v5, &v18);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = DrvDbDeleteObjectSubKey(a1, v18, v21, a4);
      }
      else if ( v12 == -1073740697 )
      {
        v11 = -1073741662;
      }
    }
    else
    {
      v13 = *(_QWORD **)(a1 + 16);
      if ( v13 != (_QWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v10 = v13;
          v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, v13, v5, &v18);
          v15 = v14;
          if ( v14 == -1073740697 )
          {
            v15 = -1073741662;
          }
          else
          {
            if ( v14 < 0 )
              break;
            v15 = DrvDbDeleteObjectSubKey(a1, v18, v21, v22);
            DrvDbReleaseDatabaseNodeBaseKey(a1, v13, v16, v18);
            v18 = 0LL;
            if ( v15 < 0 )
            {
              if ( v15 != -1073741772 )
                goto LABEL_18;
            }
            else
            {
              v7 = 1;
            }
          }
          v13 = (_QWORD *)*v13;
          if ( v13 == (_QWORD *)(a1 + 16) )
            break;
          v5 = a2;
        }
        if ( v15 == -1073741772 )
          goto LABEL_20;
LABEL_18:
        if ( v15 != -1073741662 )
        {
          v11 = v15;
          goto LABEL_22;
        }
LABEL_20:
        v11 = v15;
        if ( v7 )
          v11 = 0;
      }
    }
  }
LABEL_22:
  if ( v18 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v10, v9, v18);
  return v11;
}
